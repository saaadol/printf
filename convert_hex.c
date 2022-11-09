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