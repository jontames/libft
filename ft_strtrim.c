/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:45:59 by jtames            #+#    #+#             */
/*   Updated: 2024/10/02 19:46:02 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_trim2(char const *s1, char const *set, size_t i, int way)
{
	int		j;
	int		check;

	while ((i < ft_strlen(s1) && way == 1) || (i > 0 && way == -1))
	{
		j = 0;
		check = 0;
		while (set[j] != '\0')
		{
			if (s1[i] != set[j])
				j++;
			else
			{
				check = 1;
				break ;
			}
		}
		if (check == 0)
			return (i);
		i = i - (way * -1);
	}
	return (0);
}

int	ft_trim(char const *s1, char const *set, int way)
{
	size_t	i;

	if (way == 1)
		i = 0;
	else
		i = ft_strlen(s1) - 1;
	return (ft_trim2(s1, set, i, way));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim_s;

	if (!s1 || !set)
		return (NULL);
	start = ft_trim(s1, set, 1);
	end = ft_trim(s1, set, -1);
	if (start == 0 && end == 0)
		trim_s = ft_substr(s1, start, 0);
	else
		trim_s = ft_substr(s1, start, (end - start + 1));
	return (trim_s);
}

/* int	main()
{
	const char	s1[] = "   xxx   xxx";
	const char	set[] = " x";

	printf("%s\n", ft_strtrim(s1, set));
} */
