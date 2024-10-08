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
	ft_putstr_fd(ft_itoa(n), fd);
}

/* int main()
{
	int     a = 5153;
	int     fd;
	
	write(1, (&a - '0'), 4);
	fd = open("prueba.txt", O_WRONLY);
	ft_putnbr_fd(a, fd);
	close(fd);
} */
