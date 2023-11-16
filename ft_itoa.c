/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:44:29 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/16 16:14:04 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	malloc_len(int n)
{
	int	nlen;

	nlen = ft_intlen(n);
	if (n < 0)
		return (sizeof(char) * nlen + 2);
	return (sizeof(char) * nlen + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = ft_intlen(n) - 1;
	str = malloc(malloc_len(n));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n = -n;
	}

	while (n)
	{
		str[j] = n % 10 + 48;
		n = n / 10;
		j--;
	}
	return (str);
}
