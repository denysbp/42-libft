/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deferrei <deferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 23:13:40 by deferrei          #+#    #+#             */
/*   Updated: 2026/04/08 18:58:57 by deferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t space, size_t size)
{
	size_t	total;
	char	*pbr;

	if (space != 0 && size > SIZE_MAX / space)
	{
		return (NULL);
	}
	total = space * size;
	pbr = malloc(total);
	if (pbr == NULL)
	{
		return (NULL);
	}
	ft_memset(pbr, 0, total);
	return (pbr);
}
