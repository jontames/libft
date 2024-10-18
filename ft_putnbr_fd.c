/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:17:28 by jtames            #+#    #+#             */
/*   Updated: 2024/10/03 17:17:31 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	//ft_putstr_fd(ft_itoa(n), fd);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		else
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);

		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

/* int main()
{
	int     a = 214;
	int     fd;
	
	fd = open("prueba.txt", O_WRONLY);
	ft_putnbr_fd(a, fd);
	close(fd);
} */
