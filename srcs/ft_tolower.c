#include "libft.h"

int	ft_tolower(int c)
{
	int	alpha;

	alpha = ft_isalpha(c);
	if (alpha == 0)
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
