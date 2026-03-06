#include "libft.h"

char	*ft_strchr(char *str, int ch)
{
	/*The strchr() function takes two arguments:
	str and ch. It searches for the character
	ch in the string pointed to by str*/
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			return ((char *)str);
		}
		i++;
	}
	if (ch == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
