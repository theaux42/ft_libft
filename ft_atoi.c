/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:54:26 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/17 19:58:57 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	i;
	int	neg;

	num = 0;
	neg = 1;
	i = 0;
	 while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
	 	|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	 	i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	} else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * neg);
}
