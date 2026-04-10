/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deferrei <deferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 23:16:17 by deferrei          #+#    #+#             */
/*   Updated: 2026/04/08 19:12:33 by deferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t end)
{
	size_t	len_s;
	char	*chr;
	char	*src;

	if (!str)
		return (NULL);
	if (ft_strlen(str) <= start)
		return (ft_strdup(""));
	chr = (char *)str + start;
	if (ft_strlen(chr) < end)
	{
		len_s = ft_strlen(chr) + 1;
	}
	else
	{
		len_s = end + 1;
	}
	src = malloc(sizeof(char) * len_s);
	if (!src)
	{
		return (NULL);
	}
	ft_strlcpy(src, chr, len_s);
	return (src);
}
