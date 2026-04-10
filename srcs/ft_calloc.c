/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deferrei <deferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 23:13:40 by deferrei          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/04/06 23:13:41 by deferrei         ###   ########.fr       */
=======
/*   Updated: 2026/04/08 18:58:57 by deferrei         ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	*ft_calloc(size_t nmemb, size_t size)
=======
void	*ft_calloc(size_t space, size_t size)
>>>>>>> master
{
	size_t	total;
	char	*pbr;

<<<<<<< HEAD
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
	{
		return (NULL);
	}
	total = nmemb * size;
=======
	if (space != 0 && size > SIZE_MAX / space)
	{
		return (NULL);
	}
	total = space * size;
>>>>>>> master
	pbr = malloc(total);
	if (pbr == NULL)
	{
		return (NULL);
	}
	ft_memset(pbr, 0, total);
	return (pbr);
}
