/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:45:33 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:45:35 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j] && j < ft_strlen(little))
		{
			if (j == (ft_strlen(little) - 1))
				return ((char *)&big[i - ft_strlen(little) + 1]);
			i++;
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}

/* int main(void)
{
	char    a[] = "Hola buenos dias";
	char    b[] = "";

	printf("%s\n", ft_strnstr(a, b, 11));
	return 0;
} */
