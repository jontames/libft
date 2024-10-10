/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:42:30 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:42:34 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = ft_strlen(s);
	cc = (const char)c;
	while (i >= 0)
		if (s[i--] == cc)
			return ((char *)&s[i + 1]);
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

/* int main()
{
	char    a[] = "Hola alba";

	printf("%p\n", ft_strrchr(a, '\0'));
	printf("%p\n", strrchr(a, '\0'));
	printf("%c\n", a[8]);
} */
