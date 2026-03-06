#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>

/* verification */
int		ft_strlen(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/* strings*/
char	*ft_strchr(char *str, int ch);
void	*ft_memcpy(void *dest, const void *src, size_t count);
int		ft_strncmp(const char *str, const char *st, size_t count);
int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
void	ft_memset(void *dest, int ch, size_t count);


#endif