/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid <pdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:40:59 by pdavid            #+#    #+#             */
/*   Updated: 2017/09/25 15:31:58 by pdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
	unsigned char *temp_b;
	
	temp_b = s;
	while (n--)
		*(unsigned char *)s++ = (unsigned char)c;
	return (temp_b);
}