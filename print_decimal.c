/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:23:42 by cperegri          #+#    #+#             */
/*   Updated: 2022/01/07 19:53:11 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_decimal(int d)
{
	if (d >= 10)
	{
		print_decimal(d / 10);
		print_char(d % 10 + '0');
	}
	else if (d <= -10)
	{
		print_char('-');
		print_decimal(-(d / 10));
		print_char(-(d % 10) + '0');
	}
	else if (d >= 0)
	{
		print_char(d % 10 + '0');
	}
	else
	{
		print_char('-');
		print_char(-(d % 10) + '0');
	}
}
