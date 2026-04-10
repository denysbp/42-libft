/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deferrei <deferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 23:15:50 by deferrei          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/04/06 23:15:51 by deferrei         ###   ########.fr       */
=======
/*   Updated: 2026/04/08 13:29:21 by deferrei         ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
	{
		return (src_len);
	}
<<<<<<< HEAD
	while (i < (size - 1) && src[i] != '\0')
=======
	while (i < (size - 1) && src[i])
>>>>>>> master
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
