/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:12:53 by souledla          #+#    #+#             */
/*   Updated: 2022/11/09 15:03:38 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *i)
{
	size_t	x;

	x = nb;
	if (nb < 0)
	{
		ft_putchar('-', i);
		x *= -1;
	}
	if (x < 10)
		ft_putchar(x + 48, i);
	else
	{
		ft_putnbr(x / 10, i);
		ft_putnbr(x % 10, i);
	}
}
