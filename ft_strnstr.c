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
	size_t		k;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		k = i;
		while ((big[k] == little[j]) && (j < ft_strlen(little)) && (k < len))
		{
			if (j == (ft_strlen(little) - 1))
				return ((char *)&big[k - ft_strlen(little) + 1]);
			k++;
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	char haystack[30] = "aaabcabcd";
 	char needle[10] = "aabc";

	printf("%p\n", ft_strnstr(haystack, "cd", 8));
	return 0;
} */
