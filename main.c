/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:34:00 by afeuerst          #+#    #+#             */
/*   Updated: 2019/11/23 13:51:55 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"
#include <stdio.h>

void					main_printf_family(void)
{
	char				*ret;

	ft_printf("%d %s\n", ft_asprintf(&ret, "toto %s", "toto"), ret);
	ft_dprintf(STDOUT_FILENO, "to STDOUT %d%%\n", 42);
}

void					main_array(char **argumements)
{
	static const int	t1[] = {42, 23, 12, 0};
	static const int	t2[] = {-24, 23, 10, 0};
	static const char	string[] = "yolo la sandra de c mort\n";
	static const char	*sarray[] = {"hello", "toto", NULL};
	static const int	n1 = 0xFFFFFF96;

	ft_printf("%[]c\n", "oh! a beauty array");
	ft_printf("array = %[]c %[ ]c\n", "hello", "array");
	ft_printf("%[<->]c\n", "super array separated by somthing");
	ft_printf("%33.90[@]c %#++--00#.[ ]c\n", "haha", "lejoeledaivd");
	ft_printf("%[*]c", sizeof(string), string);
	ft_printf("%[ ]s\n", argumements);
	ft_printf("%[ (arc demon) ]u\n", t1);
	ft_printf("%[* ]X\n", 4, t1);
	ft_printf("%[4 ]X\n", t1);
	ft_printf("%[_]i\n", t2);
	ft_printf("%hh[ ]X\n", string);
	ft_printf("%[]e\n", string);
	ft_printf("%[ ]u\n", string);
	ft_printf("pointers: %[ ]p\n", argumements);
	ft_printf("sarray: %[ ]s\n", sarray);
	ft_printf("width-: %-20[<->]s\n", sarray);
	ft_printf("width>: %20[<->]s\n", sarray);
	ft_printf("width<: %4[<->]s\n", sarray);
	ft_printf("width<: %4.3[<->]s\n", sarray);
	ft_printf("width<: %4.10[<->]s\n", sarray);
	ft_printf("width<: %0.1[<->]s\n", sarray);
	ft_printf("width<: %3[<->]s\n", sarray);
	ft_printf("w: %#[4 ]x\n", t1);
	ft_printf("w: %#[4 ]x\n", t1);
	ft_printf("w: %#2[4 ]x\n", t1);
	ft_printf("w: %#04[4 ]x\n", t1);
	ft_printf("w: %#4[4 ]X\n", t1);
	ft_printf("w: %#-4[4 ]X\n", t1);
	ft_printf("w: %[4 ]X\n", t1);
	ft_printf("w: %[4 ]u\n", t1);
	ft_printf("w: %#04[4 ]u\n", t1);
	ft_printf("w: %#-04[4 ]u\n", t1);
	ft_printf("h: %02hh[4 ]x\n", &n1);
}

int						main(int count, char **argumements)
{
	ft_printf("");
	ft_printf("     \n");
	ft_printf("toto\n");
	ft_printf("%  33.10y? ");
	ft_printf("%%s? ");
	ft_printf("%++%s? ", "lol");
	ft_printf("%%s -> %d? ", 42);
	ft_printf("attention : %c %c %c %c %c %c %c %c\n", '4', '2', 'c', ' ', 'c', 'o', 'o', 'l');
	ft_printf("width: %42c %*c\n", 'a', 42, 'c');
	ft_printf("precision: %.80c %.*c\n", 'a', 42, 'b');
	ft_printf("%s %s and a %s\n", "a", "string", NULL);
	ft_printf("%#-+0##23.*s\n", 42, "yeah!");// (d i) u b o x X w(base, src), p
	ft_printf("42 = %u || 23 == %u || u(-1) == %u || 1 == %u || 0 == %u\n", 42, 23, -1, 1, 0);
	ft_printf("%u%u+%u=%u\n", 4, 2, 23, -42);
	ft_printf("%X -> %X -> %X\n", 42, 123, 1);
	ft_printf("pointer _main: %p\n", main);
	ft_printf("%i %i %i\n", 42 , 0, -42);
	ft_printf("%hhX %hX %lX\n", 42, 42, 42);
	ft_printf("%hhs\n", *argumements);
	main_printf_family();
	main_array(argumements);
	return (0);
}









