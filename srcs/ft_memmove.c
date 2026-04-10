/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deferrei <deferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 23:15:02 by deferrei          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/04/06 23:15:03 by deferrei         ###   ########.fr       */
=======
/*   Upointer_dated: 2026/04/08 12:56:11 by deferrei         ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t Bytes)
{
<<<<<<< HEAD
	const unsigned char	*ps;
	unsigned char		*pd;

	pd = (unsigned char *)dest;
	ps = (const unsigned char *)src;
	if (pd == ps || Bytes == 0)
		return (dest);
	if (pd < ps)
	{
		while (Bytes--)
		{
			*pd++ = *ps++;
=======
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
>>>>>>> master
		}
	}
	else
	{
<<<<<<< HEAD
		pd += Bytes;
		ps += Bytes;
		while (Bytes--)
		{
			*--pd = *--ps;
=======
		pointer_d += Bytes;
		pointer_s += Bytes;
		while (Bytes--)
		{
			*--pointer_d = *--pointer_s;
>>>>>>> master
		}
	}
	return (dest);
}
