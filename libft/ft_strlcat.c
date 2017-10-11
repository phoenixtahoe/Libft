/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid <pdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 16:04:52 by pdavid            #+#    #+#             */
/*   Updated: 2017/10/02 15:14:16 by pdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t x;
    size_t y;

    i = 0;
    y = 0;
    x = ft_strlen(dst);
    while (dst[i])
        i++;
    if (size < i)
        return (ft_strlen((char *)src) + size);
    while (i < size - 1)
        dst[i++] = src[y++];
    return (x + ft_strlen((char *)src));
}