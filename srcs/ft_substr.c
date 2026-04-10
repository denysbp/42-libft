/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deferrei <deferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 23:16:17 by deferrei          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/04/06 23:16:18 by deferrei         ###   ########.fr       */
=======
/*   Updated: 2026/04/08 19:12:33 by deferrei         ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
char	*ft_substr(char const *s, unsigned int start, size_t len)
=======
char	*ft_substr(char const *str, unsigned int start, size_t end)
>>>>>>> master
{
	size_t	len_s;
	char	*chr;
	char	*src;

<<<<<<< HEAD
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	chr = (char *)s + start;
	if (ft_strlen(chr) < len)
=======
	if (!str)
		return (NULL);
	if (ft_strlen(str) <= start)
		return (ft_strdup(""));
	chr = (char *)str + start;
	if (ft_strlen(chr) < end)
>>>>>>> master
	{
		len_s = ft_strlen(chr) + 1;
	}
	else
	{
<<<<<<< HEAD
		len_s = len + 1;
=======
		len_s = end + 1;
>>>>>>> master
	}
	src = malloc(sizeof(char) * len_s);
	if (!src)
	{
		return (NULL);
	}
	ft_strlcpy(src, chr, len_s);
	return (src);
}
