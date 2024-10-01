
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_trim(char const *s1, char const *set, int way)
{
	size_t	i;
	int		j;
	int		check;

	if (way == 1)
		i = 0;
	else if (way == -1)
		i = strlen(s1) - 1;
	while ((i < strlen(s1) && way == 1) || (i > 0 && way == -1))
	{
		j = 0;
		check = 0;
		while (set[j] != '\0')
			if (s1[i] != set[j])
				j++;
			else
			{
				check = 1;
				break;
			}
		if (check == 0)
			return (i);
		i = i - (way * -1);
	}
	return 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim_s;

	start = ft_trim(s1, set, 1);
	printf("%d\n", start);
	end = ft_trim(s1, set, -1);
	printf("%d\n", end);
	trim_s = ft_substr(s1, start, (end - start + 1));
	return (trim_s);
}

int	main()
{
	const char	s1[] = "hola";
	const char	set[] = "j";

	printf("%s\n", ft_strtrim(s1, set));
}
