/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:44:29 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/18 02:04:52 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	malloc_len(int n)
{
	int	nlen;

	nlen = ft_intlen(n) - 2;
	if (n < 0)
		return (sizeof(char) * nlen + 2);
	return (sizeof(char) * nlen + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		j;

	j = ft_intlen(n) - 1;
	str = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n)
	{
		str[j] = n % 10 + 48;
		n = n / 10;
		j--;
	}
	str[ft_strlen(str) + 1] = '\0';
	return (str);
}
