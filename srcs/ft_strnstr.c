#include "libft.h"

char	*ft_strnstr(const char *str, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;
	size_t	j;

	i = 0;
	len_src = ft_strlen(src);
	if (len_src == 0 || str == src)
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < size)
	{
		j = 0;
		while (str[i + j] != '\0' && src[j] != '\0'
			&& (i + j) < size && str[j + i] == src[j])
		{
			j++;
			if ((j == size && j == len_src) || j == len_src)
			{
				return ((char *)(str + i));
			}
		}
		i++;
	}
	return (0);
}
