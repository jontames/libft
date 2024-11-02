/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:43:14 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:43:17 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while ((*s1 || *s2) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/* int main()
{
 	char    a[] = "ABCD";
	char    b[] = "ABCj";
	char    c[] = "ABCD";
	char    d[] = "ABCj";

	printf("%d\n", ft_strncmp(NULL, "HOLA", 0));
	printf("%d\n", strncmp(NULL, "HOLA", 0));
	printf("---------\n");
	printf("%d\n", ft_strncmp("HOLA", NULL, 0));
	printf("%d\n", strncmp("HOLA", NULL, 0));
	printf("---------\n");
	printf("%d\n", ft_strncmp(NULL, NULL, 0));
	printf("%d\n", strncmp(NULL, NULL, 0));
} */
