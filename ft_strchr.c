/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:50:31 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/18 04:05:12 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char) c)
            return ((char *) &s[i]);
        i++;
    }
    if (s[i] == (char) c)
        return ((char *) &s[i]);
    return (NULL);
}

