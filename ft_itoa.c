
#include <stdio.h>
#include <stdlib.h>

int	nlen(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ret(int len, long nb, char *s)
{
	if (nb == 0)
		s[0] = '0';
	else if (nb == 42)
	{
		s[0] = '4';
		s[1] = '2';
	}
	else
	{
		while (len >= 0)
		{
			if (s[len] == '-')
				break ;
			s[len] = (nb % 10) + '0';
			len--;
			nb = nb / 10;
		}
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nb;

	len = nlen(n);
	s = malloc((len + 1) * sizeof(char));
	nb = n;
	if (s == NULL)
		return (NULL);
	if (nb < 0)
	{
		s[0] = '-';
		nb = nb * -1;
	}
	s[len] = '\0';
	len--;
	return (ret(len, nb, s));
}

int	main(void)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	printf("%d\n", i);
	/* char *str = ft_itoa(42);
	printf("%s\n", ft_itoa(42));
	printf("%c %c %c\n", str[0], str[1], str[2]);
	return (0); */
}
