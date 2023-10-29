NAME = libft.a

FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
	ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
	ft_putendl_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c

B_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

O_BONUS = $(B_FILES:.c=.o)

INCLUDES = libft.h
O_FILE = $(FILES:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
O_FLAGS = -c

all : $(NAME)

$(NAME): $(O_FILE)

bonus: $(O_BONUS)

$(O_BONUS): $(B_FILES)

%.o: %.c
	$(CC) -I$(INCLUDES) $(O_FLAGS) $(CFLAGS) $< -o $@
	ar -rc $(NAME) $@ 

clean:
	rm -rf $(O_FILE) $(O_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONI: all clean fclean re