/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dft_strjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:34:30 by tbabou            #+#    #+#             */
/*   Updated: 2024/03/08 16:37:32 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dft_strjoin(char *s1, char *s2)
{
	char	*tab;
	char	*temp;
	char	*p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tab = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (tab == NULL)
		return (NULL);
	p = tab;
	temp = s1;
	while (*s1 != '\0')
		*tab++ = *s1++;
	while (*s2 != '\0')
		*tab++ = *s2++;
	*tab = '\0';
	free(temp);
	return (p);
}
