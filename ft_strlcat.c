/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:04:35 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/08 16:48:14 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
TODO :
	=> Remove testing main.
	=> Remove "#include <stdio.h>"
	=> Find why it can't find functions "ft_memcpy"
	=> Find why it can't find functions "ft_strlen"
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strleen((char *)src);
	dstlen = ft_strleen(dst);
	if (dstlen >= size)
		dstlen = size;
	if (dstlen == size)
		return (size + srclen);
	if (srclen < size - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, size - dstlen - 1);
		dst[size - 1] = '\0';
	}
	return (dstlen + srclen);
}

int	main(void)
{
	char		destination[20] = "Hello, ";
	const char	*source = "world!";
	size_t		destination_size;
	size_t		result;

	destination_size = sizeof(destination);
	printf("Before strlcat:\n");
	printf("Destination: %s\n", destination);
	printf("Source: %s\n", source);
	result = ft_strlcat(destination, source, destination_size);
	printf("\nAfter strlcat:\n");
	printf("Destination: %s\n", destination);
	printf("Result: %zu\n", result);
	return (0);
}
