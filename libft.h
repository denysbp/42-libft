#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>

/* verification */
size_t		ft_strlen(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

/* strings*/
char	*ft_strchr(char *str, int ch);
void	*ft_memcpy(void *dest, const void *src, size_t count);
int		ft_strncmp(const char *str, const char *st, size_t count);
int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
void	ft_memset(void *dest, int ch, size_t count);
void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strnstr(const char *str, const char *src, size_t size);
char	*ft_strrchr(const char *str, int chr);
void	*ft_memchr(const void *str, int chr, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(char *src);

#endif