#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}


size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	len_dest;
	if (! src)
	{
		return (0);
	}
	len_dest = ft_strlen(dest);
	index = 0;
	while (src[index] && (len_dest + index) < (size - 1))
	{
		dest[index + len_dest] = src[index];
		index++;
	}
	dest[index + len_dest] = '\0';
	return (len_dest + ft_strlen(src));
}
size_t	ft_strlcpy(char *dest, const char *src, size_t	size)
{
	size_t	i;
	size_t	len_src;
	if (!src)
		return (0);
	len_src = ft_strlen(src);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
char	*ft_strdup(const char *str)
{
	char	*string;

	if (! str)
		return (NULL);
	string = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (! string)
		return (NULL);
	ft_strlcpy(string, str, ft_strlen(str) + 1);
	return (string);
}

char *ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*str;

	if (!s1 || !s2)
	{
		return (0);
	}
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = malloc(len_s1 + len_s2 + 1);
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s1, len_s1 + 1);
	ft_strlcat(str, s2, len_s1 + len_s2 + 1);
	return (str);
}

size_t	count_words(const char	*str, int c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != (char)c && (i == 0 || str[i - 1] == (char)c))
		{
			words++;
		}
		i++;
	}
	return (words);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*chr;
	char	*src;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	chr = (char *)s + start;
	if (ft_strlen(chr) < len)
	{
		len_s = ft_strlen(chr) + 1;
	}
	else
	{
		len_s = len + 1;
	}
	src = malloc(len_s);
	if (! src)
		return (NULL);
	ft_strlcpy(src, chr, len_s);
	return (src);
}

int			free_all(char **array, size_t lenght)
{
	while (lenght >= 0)
	{
		free(array[lenght] );
		lenght--;
	}
	free(array);
	return (0);
}
static int	fill_array(char **array, const char *s, int c, size_t words)
{
	size_t	i;
	size_t	index;
	size_t	start;

	i = 0;
	index = 0;
	while (s[i] && index < words)
	{
		while (s[i] == (char)c)
			i++;
		start = i;
		while (s[i] && s[i] != (char)c)
			i++;
		array[index] = ft_substr(s, start, i - start);
		if (! array[index])
			return (free_all(array, index), 0);
		index++;
	}
	array[index] = NULL;
	return (1);
}

char	**ft_spllit(const char *s, int c)
{
	size_t	words;
	char	**split;
	size_t	i;
	size_t	start;

	if (! s)
		return (NULL);
	words = count_words(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (! split)
		return (NULL);
	if (!fill_array(split, s, c , words))
		return (NULL);
	return (split);
}
int	main()
{
	t_list *lst;
	t_list *lst_2;
	char a[] = "denys";
	int b = 44;
	lst = malloc(sizeof(t_list));
	lst_2 = malloc(sizeof(t_list));
	lst -> content = &a;
	lst -> next = lst_2;
	lst_2 -> content = &b;
	lst_2 -> next = NULL;
	while(lst)
	{
		printf("%s\n", (char *)lst ->content);
		lst = lst ->next;
	}
	free(lst);
	free(lst_2);
	return (0);
}