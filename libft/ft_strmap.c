/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid <pdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 14:54:29 by pdavid            #+#    #+#             */
/*   Updated: 2017/10/10 13:59:08 by pdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
    size_t i;
    char *str;

    i = 0;
    if (!s || f)
        return (0);
    str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if (str)
    {
        while (i < ft_strlen(s))
        {
            str[i] = (*f)(s[i]);
            i++;
        }
        str[i] = '\0';
        return (str);
    }
    return (NULL);
}