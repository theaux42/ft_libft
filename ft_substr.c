/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:46:26 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/16 18:00:35 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = (size_t)start - 1;
	j = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (s[i] && j != len)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	return (str);
}
