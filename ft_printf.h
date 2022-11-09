/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souledla <souledla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:53:30 by souledla          #+#    #+#             */
/*   Updated: 2022/11/09 17:48:57 by souledla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char str, int *i);
void	ft_putnbr(int nb, int *i);
int		ft_printf(const char *str, ...);
void	convert_hex(unsigned long int ptr, char flag, int *len);
void	ft_putstr(char *str, int *i);
void	ft_uputnbr(unsigned int nb, int *i);
void	ft_pflag(void *str, int *i);
#endif