/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 01:32:11 by tbabou            #+#    #+#             */
/*   Updated: 2024/06/15 14:29:11 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_printf(int c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	variable_manager(char c, va_list arguments)
{
	int	added;

	added = 0;
	if (c == 's')
		added += ft_putstr(va_arg(arguments, char *));
	else if (c == 'c')
		added += ft_putchar_printf((unsigned char)va_arg(arguments, int), 1);
	else if (c == 'x')
		added += ft_puthexa(va_arg(arguments, int), 0);
	else if (c == 'X')
		added += ft_puthexa(va_arg(arguments, int), 1);
	else if (c == '%')
		added += ft_putchar_printf('%', 1);
	else if (c == 'p')
		added += ft_putptr((unsigned long long)va_arg(arguments, void *));
	else if (c == 'u')
		added += ft_putunbr(va_arg(arguments, unsigned int));
	else if (c == 'i' || c == 'd')
		added += ft_putnbr(va_arg(arguments, int));
	return (added);
}

int	output_manager(char *str, va_list arguments)
{
	int	i;
	int	printed;

	i = 0;
	printed = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			printed += variable_manager(str[i], arguments);
		}
		else
		{
			ft_putchar_printf(str[i], 1);
			printed++;
		}
		i++;
	}
	return (printed);
}

int	ft_printf(const char *format, ...)
{
	int		printed;
	va_list	args;

	if (!format)
		return (-1);
	printed = 0;
	va_start(args, format);
	printed += output_manager((char *)format, args);
	va_end(args);
	return (printed);
}
