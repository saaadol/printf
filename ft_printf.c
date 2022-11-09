
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
void ft_putchar(char str, int *i)
{
    write(1, &str, 1);
    (*i)++;
}

void ft_putstr(char *str, int *i)
{
    int t;

    t = 0;
    while(str[t])
        {
            ft_putchar(str[t], i);
            t++;
        }
}
void ft_putnbr(int nb, int *i)
{
    size_t x;
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


void x_flag(int ptr, char flag, int *len)
{
    if (ptr < 16)
    {
        if (flag == 'x') 
            ft_putchar("0123456789abcdef"[ptr % 16], len);
        else
            ft_putchar("0123456789ABCDEF"[ptr % 16], len);
    }
    else
    {
        x_flag(ptr / 16, flag, len);
        x_flag(ptr % 16, flag, len);
    }
} 
void checking_flag(va_list arg, char str, int *i)
{
    if (str == 'c')
        ft_putchar((char)va_arg(arg, int), i);
    else if (str == 's')
    {
        if (!(va_arg(arg, char *)))
        {
            write(1,"(null)",6);
            *i += 6;
        }
    }
    else if (str == 'd' || str == 'i')
        ft_putnbr(va_arg(arg, int), i);
    else if (str == 'x' || str == 'X')
        x_flag(va_arg(arg, int), str, i);
    else if (str == '%') 
        ft_putchar(str,i); 

}
int	ft_printf(const char *str, ...)
{
    int     i;
    int position;

    position = 0;
    va_list arg;
    i = -1;
    va_start(arg, str);
    while(str[++i])
    {
        if(str[i] != '%')
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
    // Write C code here
    int fd = ft_printf("%%");
    printf("%d", fd);

    return 0;
}
