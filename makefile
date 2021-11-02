
SOURCES = ft_atoi.c \
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

OFILES = ft_atoi.o \
		ft_bzero.o \
		ft_calloc.o \
		ft_isalnum.o \
		ft_isalpha.o \
		ft_isascii.o \
		ft_isdigit.o \
		ft_isprint.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_memcpy.o \
		ft_memmove.o \
		ft_memset.o \
		ft_strchr.o \
		ft_strdup.o \
		ft_strjoin.o \
		ft_strlcat.o \
		ft_strlcpy.o \
		ft_strlen.o \
		ft_strncmp.o \
		ft_strnstr.o \
		ft_strrchr.o \
		ft_strtrim.o \
		ft_substr.o \
		ft_tolower.o \
		ft_toupper.o \

HFILE = libft.h

NAME =libft.a

Wflags = -Wall -Wextra -Werror

LIB1 = ar -rcs
LIB2 = ranlib

RM = rm -f

all: $(NAME)

$(NAME):	$(OFILES) $(HFILE)
			$(LIB1) $(NAME) $(OFILES)
			$(LIB2) $(NAME)

$(OFILES): $(SRCS)
	$(CC) -c $(Wflags) *.c


clean:
		$(RM) $(OFILES)

fclean: clean
	$(RM)	$(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re