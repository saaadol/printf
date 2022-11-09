NAME = libftprintf.a
FILES = ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_uputnbr.c \
		ft_convert_hex.c \
		ft_pflag.c
OBJ = $(FILES:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I ft_printf.h
CC = cc
all : $(NAME)
$(NAME) : $(OBJ)
	ar -crs $(NAME) $(OBJ)
%.o : %.c ft_printf.h
	$(CC) -c $(CFLAGS) $<
clean : 
	rm -f $(OBJ)
fclean :clean 
	rm -f $(NAME)
re :fclean all
.PHONY : fclean clean re

