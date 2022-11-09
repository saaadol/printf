/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:17:28 by souledla          #+#    #+#             */
/*   Updated: 2022/11/09 17:31:06 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	ft_putstr(char *str, int *i)
{
	int	t;

	t = 0;
	if (!str)
		ft_putstr("(null)", i);
	while (str && str[t])
	{
		ft_putchar(str[t], i);
		t++;
	}
}
