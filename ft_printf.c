
#include "ft_printf.h"

void	checking_flag(va_list arg, char str, int *i)
{
	if (str == 'c')
		ft_putchar((char)va_arg(arg, int), i);
	else if (str == 's')
		ft_putstr(va_arg(arg, char *), i);
	else if (str == 'p')
		ft_pflag(va_arg(arg, void *), i);
	else if (str == 'd' || str == 'i')
		ft_putnbr(va_arg(arg, int), i);
	else if (str == 'x' || str == 'X')
		convert_hex(va_arg(arg, unsigned int), str, i);
	else if (str == '%')
		ft_putchar(str, i);
	else if (str == 'u')
		ft_uputnbr(va_arg(arg, unsigned int), i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		position;
	va_list	arg;

	position = 0;
	i = -1;
	va_start(arg, str);
	while (str[++i])
	{
		if (str[i] != '%')
			ft_putchar(str[i], &position);
		else
		{
			checking_flag(arg, str[i + 1], &position);
			i++;
		}
	}
	va_end(arg);
	return (position);
}
int main() {
	int i = 4;
    ft_printf("%ds", i);
}