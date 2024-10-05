
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	const char	s[] = "hola me llamo pepe";
	char		c = ' ';
	char		matrix[5][6];
	int			i;
	int			j;
	int			k;
	int			h;
	int			last_occ;

	i = 0;
	j = 0;
	last_occ = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			h = 0;
			k = last_occ;
			while (k < i)
			{
				matrix[j][h] = (char)s[k];
				h++;
				k++;
			}
			matrix[j][k] = '\0';
			last_occ = i;
			j++;
			i++;
		}
		i++;
	}
	j = -1;
	while (++j < 5)
		printf("%s\n", matrix[j]);
}
