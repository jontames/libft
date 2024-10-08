/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:39:14 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:39:16 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
		temp[i++] = (unsigned char)c;
	return (s);
}

/* int main()
{
	char    b[5];
	char    a[5];

	printf("%p\n", a);
	printf("%p\n", ft_memset(a, 'a', 5));
	printf("%p\n", b);
	printf("%p\n", memset(b, 'a', 5));
	printf("%s\n", a);
	printf("%s\n", b);
} */
