/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:27:29 by cperegri          #+#    #+#             */
/*   Updated: 2022/01/07 21:44:41 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

//	%с	Символ типа char
//	%s	Строка символов
//	%p	Вывод указателя
//	%d	Десятичное число целого типа со знаком
//	%i	Десятичное число целого типа со знаком
//	%u	Десятичное число целого типа без знака
//	%х	Шестнадцатиричное целое число без знака (буквы нижнего регистра)
//	%Х	Шестнадцатиричное целое число без знака (буквы верхнего регистра)
//	%%	Выводит символ %

int		g_length;

void	print_char(int c);
void	print_string(char *s);
void	print_decimal(int d);
void	print_unsigned_decimal(unsigned int u);

void	print_lowcase_hex_char(unsigned int x);
void	print_lowcase_hex(unsigned int x);

void	print_uppercase_hex_char(unsigned int x);
void	print_uppercase_hex(unsigned int x);

void	print_pointer(void *p);

void	pick_print(va_list args, int c);
int		ft_printf(const	char *input, ...);
#endif