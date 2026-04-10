/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deferrei <deferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 23:15:24 by deferrei          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/04/06 23:15:25 by deferrei         ###   ########.fr       */
=======
/*   Updated: 2026/04/08 20:02:58 by deferrei         ###   ########.fr       */
>>>>>>> master
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
static int	ft_count(const char *s, char c)
=======
static int	ft_count(const char *str, char c)
>>>>>>> master
{
	int	i;
	int	words;

	i = 0;
	words = 0;
<<<<<<< HEAD
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
=======
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
>>>>>>> master
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

<<<<<<< HEAD
static char	*get_word(const char *s, int start, int end)
{
	return (ft_substr(s, start, end - start));
}

static int	fill_array(char **array, const char *s, char c, int words)
=======
static char	*get_word(const char *str, int start, int end)
{
	return (ft_substr(str, start, end - start));
}

static int	fill_array(char **array, const char *str, char c, int words)
>>>>>>> master
{
	int	i;
	int	start;
	int	end;

	i = 0;
	end = 0;
<<<<<<< HEAD
	while (s[i] && end < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		array[end] = get_word(s, start, i);
=======
	while (str[i] && end < words)
	{
		while (str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		array[end] = get_word(str, start, i);
>>>>>>> master
		if (!array[end])
			return (free_all(array, end - 1), 0);
		end++;
	}
	array[end] = NULL;
	return (1);
}

<<<<<<< HEAD
char	**ft_split(char const *s, char c)
=======
char	**ft_split(char const *str, char c)
>>>>>>> master
{
	char	**array;
	int		words;

<<<<<<< HEAD
	if (!s)
		return (NULL);
	words = ft_count(s, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	if (!fill_array(array, s, c, words))
=======
	if (!str)
		return (NULL);
	words = ft_count(str, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	if (!fill_array(array, str, c, words))
>>>>>>> master
		return (NULL);
	return (array);
}
