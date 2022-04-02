/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:24:41 by cperegri          #+#    #+#             */
/*   Updated: 2022/01/07 19:53:30 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_pointer(void *p)
{
	if ((unsigned long)p >= 16)
	{
		print_pointer((void *)((unsigned long)p / 16));
		print_lowcase_hex_char((unsigned long)p % 16);
	}
	else
	{
		print_char('0');
		print_char('x');
		print_lowcase_hex_char((unsigned long)p % 16);
	}
}
