/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:40:11 by tbabou            #+#    #+#             */
/*   Updated: 2024/03/08 01:15:58 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char),
	t_m_free *m_free)
{
	char	*new;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	new = (char *)ft_malloc(sizeof(char) * (len + 1), m_free);
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = (*f)(i, s[i]);
		++i;
	}
	new[i] = 0;
	return (new);
}
