/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:09:01 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/29 07:49:19 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	j = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	new = (char *)malloc(j + 1);
	if (!new || (!s1 || !s2))
		return (NULL);
	while (s1[i] && i < j)
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[k] && i < j)
	{
		new[i] = s2[k];
		k++;
		i++;
	}
	new[j] = '\0';
	return (new);
}
