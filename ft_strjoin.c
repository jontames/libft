/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:45:29 by jtames            #+#    #+#             */
/*   Updated: 2024/10/02 19:45:33 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	new_s = malloc(strlen(s1) + strlen(s2) + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < (strlen(s1) + strlen(s2)))
	{
		if (i < strlen(s1))
			new_s[i] = s1[i];
		else if (i >= strlen(s1))
			new_s[i] = s2[j++];
		i++;
	}
	return (new_s);
}

int main()
{
	char    a[] = "Hola ";
	char    b[] = "amigo";

	printf("%p\n", ft_strjoin(a, b));
	printf("%s\n", ft_strjoin(a, b));
}
