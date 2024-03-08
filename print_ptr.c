/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:33:51 by tbabou            #+#    #+#             */
/*   Updated: 2024/03/08 01:35:04 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_printptr(num / 16);
		ft_printptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_putptr(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	if (ptr == 0)
		print_length += ft_putstr("(nil)");
	else
	{
		print_length += ft_putstr("0x");
		ft_printptr(ptr);
		print_length += ft_hexalen(ptr);
	}
	return (print_length);
}
