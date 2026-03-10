#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t Bytes)
{
	int				i;
	unsigned char	*ps;
	unsigned char	*pd;

	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	i = 0;
	if (Bytes == 0)
	{
		return (dest);
	}
	while (Bytes != 0)
	{
		pd[i] = ps[i];
		i++;
		Bytes--;
	}
	pd[i] = '\0';
	return (dest);
}
