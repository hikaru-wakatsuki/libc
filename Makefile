NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
	   	ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
	   	ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp \
		ft_memchr \
		ft_memcmp \
		ft_strnstr \
		ft_atoi \
		ft_calloc \
		ft_strdup \





OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	$(MAKE) clean
	rm -f $(NAME)

re:
	fclean all

.PHONY:
	all clean fclean re
