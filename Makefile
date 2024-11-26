NAME = libftprintf.a
SOURCES = \
	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_hexalower.c ft_hexaupper.c ft_unsigned_decimal.c ft_addressp.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: $(OBJECTS) $(BOBJECTS)

.PHONY: all bonus clean fclean re