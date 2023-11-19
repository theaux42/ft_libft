/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:50:31 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/18 03:58:23 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *res;

    res = NULL;
    i = 0;

    while (s[i])
    {
        if (s[i] == (char) c)
            res = (char *) &s[i];
        i++;
    }

    if (s[i] == c)
        res = (char *) &s[i];

    return (res);
}
