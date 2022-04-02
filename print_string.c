/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:23:24 by cperegri          #+#    #+#             */
/*   Updated: 2022/01/07 19:42:59 by cperegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_string(char *s)
{
	if (!s)
	{
		print_string("(null)");
		return ;
	}
	while (*s)
	{
		print_char(*s);
		s++;
	}
}
