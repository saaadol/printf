/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:16:00 by souledla          #+#    #+#             */
/*   Updated: 2022/11/09 15:32:33 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_uputnbr(unsigned int nb, int *i)
{
	if (nb < 0)
	{
		ft_putchar('-', i);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + 48, i);
	else
	{
		ft_putnbr(nb / 10, i);
		ft_putnbr(nb % 10, i);
	}
}