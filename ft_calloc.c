/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:58:13 by jtames            #+#    #+#             */
/*   Updated: 2024/09/12 17:58:16 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmemb == SIZE_MAX || size == SIZE_MAX
		|| (nmemb >= 4294967296 && size >= 4294967296))
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc((size_t)total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

/* int main()
{
	void	*a;

	a = ft_calloc(3, NULL);
	printf("%p\n", a);

	free(a);
}  */
