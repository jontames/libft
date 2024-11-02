/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:46:33 by jtames            #+#    #+#             */
/*   Updated: 2024/10/02 19:46:35 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert(char *a, int i, int j, int n)
{
	if (n < 0)
	{
		j = n * -1;
		while (j != 0)
		{
			a[i] = (j % 10) + '0';
			i--;
			j /= 10;
		}
	}
	else
	{
		j = n;
		while (j != 0)
		{
			a[i - 1] = (j % 10) + '0';
			i--;
			j /= 10;
		}
	}
	return (a);
}

char	*ft_nbrnegative(int n)
{
	char		*a;
	int			i;
	long int	j;

	if (n == 0)
	{
		a = malloc(2);
		a[0] = '0';
		a[1] = '\0';
		return (a);
	}
	a = malloc(12);
	a[0] = '-';
	a[11] = '\0';
	i = 10;
	j = 2147483648;
	while (j != 0)
	{
		a[i] = (j % 10) + '0';
		i--;
		j /= 10;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*a;

	if (n == -2147483648 || n == 0)
		return (ft_nbrnegative(n));
	i = 0;
	j = n;
	while (j != 0)
	{
		j /= 10;
		i++;
	}
	if (n < 0)
	{
		a = malloc(i + 2);
		a[0] = '-';
		a[i + 1] = '\0';
	}
	else
	{
		a = malloc(i + 1);
		a[i] = '\0';
	}
	return (ft_convert(a, i, j, n));
}

/* int	main(void)
{
	printf("%s\n", ft_itoa(NULL));
} */
