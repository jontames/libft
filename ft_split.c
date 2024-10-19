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

char	**free_split(char **s_splited, int words)
{
	while (s_splited[words] != NULL)
		free(s_splited[words++]);
	free(s_splited);
	return (NULL);
}

char	**wr_words(char const *s, char c, int words, char **s_splited)
{
	int		i;
	int		k;
	int		w_len;

	i = ft_strlen(s) - 1;
	while (i >= 0 && words > 0)
	{
		if (s[i] != c)
		{
			k = i;
			w_len = 0;
			while (s[k] != c && k-- >= 0)
				w_len++;
			s_splited[words - 1] = malloc(sizeof(char) * (w_len + 1));
			if (!s_splited[words - 1])
				return (free_split(s_splited, words - 1));
			s_splited[words - 1][w_len] = '\0';
			while (s[i] != c && i >= 0)
				s_splited[words - 1][--w_len] = s[i--];
			words--;
		}
		else
			i--;
	}
	return (s_splited);
}

int	w_count(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	if (s[0] == '\0' || !s || s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**s_splited;
	int		words;

	words = w_count(s, c);
	if (words == 0)
	{
		s_splited = malloc(sizeof(char *) * 1);
		s_splited[0] = NULL;
		return (s_splited);
	}
	else
		s_splited = malloc(sizeof(char *) * (words + 1));
	s_splited[words] = NULL;
	s_splited = wr_words(s, c, words, s_splited);
	return (s_splited);
}

/* int	main()
{
	char	*a = strdup("Tripouille");
	char	b = ' ';
	int		i; 
	char	**j;

  	i = 0;
	j = ft_split(a, b);
	printf("%s\n", j[0]);
	printf("%p\n", j[1]);
  	while (j[i] != NULL)
		printf("%s\n", j[i++]);
	free(j);
} */
