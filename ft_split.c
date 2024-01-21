/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:39:18 by tbabou            #+#    #+#             */
/*   Updated: 2024/01/21 05:33:16 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *str, char characters)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != characters)
		{
			count++;
			while (str[i] && str[i] != characters)
				i++;
		}
		else if (str[i] == characters)
			i++;
	}
	return (count);
}

static size_t	ft_wordlen(char const *str, char characters)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != characters)
		i++;
	return (i);
}

static char	**pas_cool_split(char const *str, char characters, char **array,
		size_t words_count, t_m_free *m_free)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (str[j] && str[j] == characters)
			j++;
		array[i] = ft_substr(str, j, ft_wordlen(&str[j], characters), m_free);
		if (!array[i])
		{
			ft_free_all(m_free);
			return (NULL);
		}
		while (str[j] && str[j] != characters)
			j++;
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *str, char characters, t_m_free *m_free)
{
	char	**array;
	size_t	words;

	if (!str)
		return (NULL);
	words = ft_wordcount(str, characters);
	array = (char **)ft_malloc(sizeof(char *) * (words + 1), m_free);
	if (!array)
		return (NULL);
	array = pas_cool_split(str, characters, array, words, m_free);
	return (array);
}
