NAME=libft.a
Flaggies= -Wall -Wextra -Werror
OFILES= ft_bzero.o ft_isalnum.o ft_isalpha.o \
ft_isascii.o ft_isdigit.o ft_isprint.o \
ft_memcpy.o ft_memmove.o ft_memset.o \
ft_strlen.o ft_tolower.o ft_toupper.o 
OFILES2 ?= ft_strlcpy.o ft_strlcat.o ft_strchr.o \
 ft_strrchr.o ft_strncmp.o ft_memchr.o \
 ft_memcmp.o ft_strnstr.o ft_atoi.o \
 ft_calloc.o ft_strdup.o
 CFILES= ft_bzero.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memcpy.c ft_memmove.c ft_memset.c \
ft_strlen.c ft_tolower.c ft_toupper.c 
all: $(NAME)

$(NAME): $(OFILES) libft.h
	ar -cr $(NAME) $(OFILES)
	ranlib $(NAME)

$(OFILES): $(CFILES) libft.h
	gcc -c $(Flaggies) -o $@ $<

clean:
	rm -f $(OFILES)

fclean: clean
 rm -f $(NAME)

re: fclean all

.PHONY: clean
