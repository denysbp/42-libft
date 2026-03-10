#include "libft.h"

int	ft_strncmp(const char *str, const char *st, size_t count)
{
	int	i;

	i = 0;
	if (count == 0)
	{
		return (0);
	}
	while ((str[i] == st[i] && str[i] != '\n' && st[i] != '\n') || count == 0)
	{
		i++;
		count--;
	}
	return (str[i] - st[i]);
}
