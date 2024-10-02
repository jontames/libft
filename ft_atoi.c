/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:45:57 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:46:00 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int		i;
	int		temp;
	int		minus_check;

	i = 0;
	temp = 0;
	minus_check = 1;
	while (nptr[i] != '\0')
	{
		if ((nptr[i] == '+' || nptr[i] == '-') && (nptr[i + 1] == '+'
			|| nptr[i + 1] == '-'))
			return 0;
		else if (nptr[i] == ' ' || nptr[i] == '+')
			i++;
		else if (nptr[i] == '-')
		{
			minus_check *= -1;
			i++;
		}
		else if (nptr[i] >= '0' && nptr[i] <= '9')
			temp = (temp * 10) + (nptr[i++] - '0');
		else
			return (temp * minus_check);
	}
	return (temp * minus_check);
}

int main()
{
	printf("%d\n", ft_atoi("  12a34"));
	printf("%d\n", atoi("  12a34"));
}
