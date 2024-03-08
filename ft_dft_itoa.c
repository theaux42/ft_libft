/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dft_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 01:31:05 by tbabou            #+#    #+#             */
/*   Updated: 2024/03/08 17:34:07 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dft_itoa(int n)
{
	char	*str;
	int		j;

	j = ft_intlen(n) - 1;
	if (n == -2147483648)
		return (ft_dft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[j + 1] = '\0';
	while (n)
	{
		str[j] = n % 10 + 48;
		n = n / 10;
		j--;
	}
	return (str);
}
