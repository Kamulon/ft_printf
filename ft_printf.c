/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:52:16 by cperegri          #+#    #+#             */
/*   Updated: 2022/01/07 22:12:19 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	%с	Символ типа char
//	%s	Строка символов
//	%p	Вывод указателя
//	%d	Десятичное число целого типа со знаком
//	%i	Десятичное число целого типа со знаком
//	%u	Десятичное число целого типа без знака
//	%х	Шестнадцатиричное целое число без знака (буквы нижнего регистра)
//	%Х	Шестнадцатиричное целое число без знака (буквы верхнего регистра)
//	%%	Выводит символ %

void	pick_print(va_list args, int c)
{
	if (c == 'c')
		print_char(va_arg(args, int));
	else if (c == 's')
		print_string(va_arg(args, char *));
	else if (c == 'p')
		print_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		print_decimal(va_arg(args, int));
	else if (c == 'u')
		print_unsigned_decimal(va_arg(args, unsigned int));
	else if (c == 'x')
		print_lowcase_hex(va_arg(args, unsigned int));
	else if (c == 'X')
		print_uppercase_hex(va_arg(args, unsigned int));
	else if (c == '%')
		print_char('%');
}

int	ft_printf(const	char *input, ...)
{
	va_list	args;

	g_length = 0;
	va_start(args, input);
	while (*input)
	{
		if (*input == '%')
			pick_print(args, *(input++ + 1));
		else
			print_char(*input);
		input ++;
	}
	va_end(args);
	return (g_length);
}

//int	main(void)
//{
//	ft_printf("%u", -1);
//}
//int	main(void)
//{
//	int	a;
//	int	b;
//
//	a = ft_printf(" %s ", NULL);
//	printf("\n");
//	b = printf(" %s ", NULL);
//	printf("%d, %d", a, b);
//	return (0);
//}
//int	main(void)
//{
//	int		a;
//	void	*b;
//	long	c;
//
//	c = 1;
//	a = __INT_MAX__;
//	b = &c;
//	print_unsigned_decimal(0);
//	printf("%lu", sizeof(b));
//	print_uppercase_hex(0x7a123);
//	print_lowcase_hex(0x7a123);
//	write(1, &b, 10);
//	printf("%c\n", 'a');
//	printf("%s\n", "asd");
//	print_pointer(&c);
//	printf("\n%p\n", &c);
//	printf("%d\n", (int)&c);
//	printf("%x\n", (unsigned int)&c);
//	printf("%lx\n", (unsigned long)&c);
//	printf("%ld\n", (long)&c);
//	printf("%lu\n", (unsigned long)&c);
//	printf("%lld\n", (long long)&c);
//	printf("%d\n", a);
//	printf("%i\n", a);
//	printf("%u\n", a);
//	printf("\n%x\n", (unsigned int)&c);
//	printf("%X\n", a);
//	printf("%%\n");
//	return (0);
//}
