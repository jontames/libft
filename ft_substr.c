
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	if (start >= strlen(s))
		return ("");
	sub_s = malloc(sizeof(char) * (len + 1));
	if (sub_s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		sub_s[i++] = s[start++];
	sub_s[i] = '\0';
	return (sub_s);
}

/* char	*ft_substr1(const char *s, unsigned int start, size_t len)
{
	char		*sub_s;
	size_t		i;

	if (start >= strlen(s))
		return (strdup(""));
	if (len >= strlen(s + start))
		len = strlen(s + start);
	sub_s = malloc(sizeof(char) * (len + 1));
	if (sub_s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_s[i] = s[start];
		i++;
		start++;
	}
	sub_s[i] = '\0';
	return (sub_s);
} */

/* int	main()
{
	printf("JON: %p\n", ft_substr("ABCDEF", 9, 10));
	printf("JON: %s\n", ft_substr("ABCDEF", 9, 10));
	printf("NOAH: %p\n", ft_substr1("ABCDEF", 9, 10));
	printf("NOAH: %s\n", ft_substr1("ABCDEF", 9, 10));
} */
