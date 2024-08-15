/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 22:32:27 by tbabou            #+#    #+#             */
/*   Updated: 2024/01/17 20:31:22 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy_gnl(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (i < srcsize && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

char	*ft_strrchr_gnl(char *s, int c)
{
	int		i;
	char	*res;

	res = NULL;
	i = 0;
	while (s && s[i])
	{
		if (s[i] == (char)c)
		{
			res = (char *)&s[i];
			break ;
		}
		i++;
	}
	if (s[i] == c)
		res = (char *)&s[i + 1];
	return (res);
}

int	get_final_size(char *s1, char *s2, char *buffer)
{
	int	size;

	size = 0;
	if (s1)
	{
		size = s1 - s2;
		ft_strlcpy_gnl(buffer, s1, BUFFER_SIZE + 1);
	}
	else
	{
		size = ft_strlen(s2);
		ft_strlcpy_gnl(buffer, "", BUFFER_SIZE +1);
	}
	return (size);
}

char	*get_line(int fd)
{
	static char	buffer[FD_SIZE][BUFFER_SIZE + 1];
	char		*line;
	char		*new_line;
	int			amount;
	int			final_size;

	line = ft_strdup(buffer[fd]);
	amount = BUFFER_SIZE;
	while (!isnewline(buffer[fd]) && (amount == BUFFER_SIZE || amount > 0))
	{
		amount = read(fd, buffer[fd], BUFFER_SIZE);
		buffer[fd][amount] = '\0';
		line = ft_strjoin(line, buffer[fd]);
	}
	if (!ft_strlen(line))
		return (free(line), NULL);
	new_line = ft_strrchr_gnl(line, '\n');
	final_size = get_final_size(new_line, line, buffer[fd]);
	line[final_size] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	line = get_line(fd);
	if (!line || line[0] == '\0')
		return (NULL);
	return (line);
}
