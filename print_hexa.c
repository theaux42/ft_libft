/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:43:05 by tbabou            #+#    #+#             */
/*   Updated: 2024/03/08 01:35:04 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_printhexa(unsigned int num, int isUpper)
{
	char	*charlist;

	if (isUpper)
		charlist = "0123456789ABCDEF";
	else
		charlist = "0123456789abcdef";
	if (num >= 16)
	{
		ft_printhexa(num / 16, isUpper);
		ft_printhexa(num % 16, isUpper);
	}
	else if (num <= 9)
		ft_putchar_fd(num + '0', 1);
	else
		ft_putchar_fd(charlist[num], 1);
}

int	ft_puthexa(unsigned int num, int isUpper)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_printhexa(num, isUpper);
	return (ft_hexalen(num));
}
