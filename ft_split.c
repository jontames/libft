/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:47:02 by jtames            #+#    #+#             */
/*   Updated: 2024/10/02 19:47:04 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wcount(char const *s, int *c_positions)
{
	int		i;
	int		j;
	int		arr_size;
	int		w_count;

	i = 0;
	j = 0;
	arr_size = 0;
	w_count = 0;
	while (c_positions[i++] != -1)
		arr_size++;
	i = ft_strlen(s);
	while (arr_size > 0)
	{
		j = c_positions[arr_size - 1];
		if ((i - j) > 1)
			w_count++;
		i = j;
		arr_size--;
	}
	j = 0;
	if ((i - j) > 1)
		w_count++;
	return (w_count);
}

int	*c_track(char const *s, char c)
{
 	int		*c_positions;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		if (s[i++] == c)
			j++;
	c_positions = malloc(sizeof(int) * (j + 1));
	c_positions[j] = -1;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			c_positions[j++] = i;
		i++;
	}
	return (c_positions);
}

char	**ft_split(char const *s, char c)
{
	char	**s_arr;
	int		*c_positions;
	int		w_count;
	int		arr_size;
	int		i;
	int		j;

	arr_size = 0;
	i = 0;
	c_positions = c_track(s, c);
	w_count = wcount(s, c_positions);
	s_arr = malloc(sizeof(char *) * (w_count + 1));
	while (c_positions[i++] != -1)
		arr_size++;
	s_arr[w_count] = malloc(sizeof(char) * 1);
	s_arr[w_count] = "";
	while (arr_size > 0)
	{
		i = c_positions[arr_size - 1];
		j = c_positions[arr_size - 2];
		if ((i - j) > 1)
		{
			s_arr[w_count - 1] = malloc(sizeof(char) * (i - j));
			s_arr[w_count - 1] = ft_substr(s, j, (i - j - 1));
			w_count--;
			arr_size--;
		}
		else
			arr_size--;
	}
	i = j;
	j = 0;
	if ((i - j) > 1)
	{
		s_arr[w_count - 1] = malloc(sizeof(char) * (i - j));
		s_arr[w_count - 1] = ft_substr(s, j, (i - j - 1));
	}
	return (s_arr);
}

int	main()
{
	char	*a = "Hola me llamo juan";
	char	b = ' ';
	int		i;
	char	**j;

	i = 0;
	j = ft_split(a, b);
	while (j[i] != 0)
		printf("%s\n", j[i++]);
}
