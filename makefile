
SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

OFILES = $(SRCS:.c=.o)

HFILE = libft.h

NAME = libft.a

Wflags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(HFILE) | $(OFILES) 
	ar -rcs $@ $|

$(OFILES): $(SRCS)
	$(CC) -c $(Wflags) $^

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM)	$(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re