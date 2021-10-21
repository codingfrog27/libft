#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int				ft_isalpha(int c);
int				ft_isdigit(int	c);
int				ft_isascii(int	c);
int				ft_isprint(int	c);
int				ft_strlen(char *str);
void			*ft_memset(void *dest, int	c, size_t	len);
void			ft_bzero(void	*s, size_t	n);
void			*ft_memcpy(void	*dest, const void	*src, size_t	n);
void			*ft_memmove(void	*dst, const void	*src, size_t	len);
unsigned int	ft_strlcpy(char *dst, const char	*src, size_t	size);
size_t			ft_strlcat(char	*dst, const char	*src, size_t	dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char	*s, int	c);
#endif