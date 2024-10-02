/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:40:21 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:40:23 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char		*p_str1;
	unsigned const char	*p_str2;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	p_str1 = (unsigned char*)dest;
	p_str2 = (unsigned const char*)src;
	if (!n || dest == src)
		return (dest);
	while (n--)
		p_str1[n] = p_str2[n];
	return (dest);
}