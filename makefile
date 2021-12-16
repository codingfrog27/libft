# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mde-cloe <mde-cloe@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2021/12/13 18:00:17 by mde-cloe      #+#    #+#                  #
#    Updated: 2021/12/16 17:47:19 by mde-cloe      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS := ft_atoi.c \
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
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

OFILES := $(SRCS:.c=.o)

BONUS_SRCS := ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \

BONUS_OFILES := $(BONUS_SRCS:.c=.o)

HFILE := libft.h

NAME := libft.a

CFLAGS ?= -Wall -Wextra -Werror -g

ifdef BONUSTIME
	OFILES := $(OFILES) $(BONUS_OFILES)
endif
all: $(NAME)



$(NAME): $(OFILES) | $(HFILE)
	ar -rcs $@ $?

$(OFILES): %.o: %.c
	$(CC) -c $(CFLAGS) $^
bonus:
	make BONUSTIME=1
clean:
	$(RM) $(OFILES) $(BONUS_OFILES)

fclean: clean
	$(RM)	$(NAME)



re: fclean $(NAME)

.PHONY: all clean fclean re bonus