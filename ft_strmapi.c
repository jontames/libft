/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:30:04 by jtames            #+#    #+#             */
/*   Updated: 2024/10/18 16:30:07 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	addOne(unsigned int i, char c)
{
	return (i + c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*a;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	a = malloc(ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}

/* int	main(void)
{
	char	*s;

	s = ft_strmapi("1234", addOne);
	printf("%s\n", s);
} */
