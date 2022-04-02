/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_decimal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:23:57 by cperegri          #+#    #+#             */
/*   Updated: 2022/01/07 17:33:00 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_unsigned_decimal(unsigned int u)
{
	if (u >= 10)
	{
		print_unsigned_decimal(u / 10);
		print_char(u % 10 + '0');
	}
	else
		print_char(u % 10 + '0');
}
