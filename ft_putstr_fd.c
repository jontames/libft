/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:16:31 by jtames            #+#    #+#             */
/*   Updated: 2024/10/03 17:16:33 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
}

/* int main()
{
	char    a[] = "\0";
	int     fd;
	
	fd = open("prueba.txt", O_WRONLY);
	ft_putstr_fd(a, fd);
	close(fd);
} */
