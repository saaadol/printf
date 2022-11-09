/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:36:23 by souledla          #+#    #+#             */
/*   Updated: 2022/11/09 17:36:04 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_hex(unsigned long  int ptr, char flag, int *len)
{
	unsigned long  int sixteen;

	sixteen = 16;
	if (ptr < sixteen)
	{
		if (flag == 'x')
			ft_putchar("0123456789abcdef"[ptr % sixteen], len);
		else
			ft_putchar("0123456789ABCDEF"[ptr % sixteen], len);
	}
	else
	{
		convert_hex(ptr / sixteen, flag, len);
		convert_hex(ptr % sixteen, flag, len);
	}
}
