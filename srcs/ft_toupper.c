#include "libft.h"

int	ft_toupper(int c)
{
	int	alpha;

	alpha = ft_isalpha(c);
	if (alpha == 0)
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
