/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uppercase_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:24:29 by cperegri          #+#    #+#             */
/*   Updated: 2022/01/07 19:53:49 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_uppercase_hex_char(unsigned int x)
{
	if (x < 10)
		print_char(x + '0');
	else
		print_char(x + 'A' - 10);
}

void	print_uppercase_hex(unsigned int x)
{
	if (x >= 16)
	{
		print_uppercase_hex(x / 16);
		print_uppercase_hex_char(x % 16);
	}
	else
		print_uppercase_hex_char(x % 16);
}
