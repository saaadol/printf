/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pflag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:44:07 by souledla          #+#    #+#             */
/*   Updated: 2022/11/09 17:55:38 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pflag(void *str, int *i)
{
	ft_putstr("0x", i);
	convert_hex((unsigned long int ) str, 'x', i);
}