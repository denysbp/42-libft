/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deferrei <deferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 23:15:02 by deferrei          #+#    #+#             */
/*   Upointer_dated: 2026/04/08 12:56:11 by deferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t Bytes)
{
	const unsigned char	*pointer_s;
	unsigned char		*pointer_d;

	pointer_d = (unsigned char *)dest;
	pointer_s = (const unsigned char *)src;
	if (pointer_d == pointer_s || Bytes == 0)
		return (dest);
	if (pointer_d < pointer_s)
	{
		while (Bytes--)
		{
			*pointer_d++ = *pointer_s++;
		}
	}
	else
	{
		pointer_d += Bytes;
		pointer_s += Bytes;
		while (Bytes--)
		{
			*--pointer_d = *--pointer_s;
		}
	}
	return (dest);
}
