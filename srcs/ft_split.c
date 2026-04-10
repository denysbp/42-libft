/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deferrei <deferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 23:15:24 by deferrei          #+#    #+#             */
/*   Updated: 2026/04/08 20:02:58 by deferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void	free_all(char **array, int n)
{
	while (n >= 0)
	{
		free(array[n]);
		n--;
	}
	free(array);
}

static char	*get_word(const char *str, int start, int end)
{
	return (ft_substr(str, start, end - start));
}

static int	fill_array(char **array, const char *str, char c, int words)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	end = 0;
	while (str[i] && end < words)
	{
		while (str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		array[end] = get_word(str, start, i);
		if (!array[end])
			return (free_all(array, end - 1), 0);
		end++;
	}
	array[end] = NULL;
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**array;
	int		words;

	if (!str)
		return (NULL);
	words = ft_count(str, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	if (!fill_array(array, str, c, words))
		return (NULL);
	return (array);
}
