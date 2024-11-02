#include "libft.h"

int	main(void)
{
	char	test_is_1 = '5';
	char	test_is_2 = 'a';
	char	test_is_3 = 'H';
	char	test_is_4 = '*';
	char	test_is_5 = '\0';
	char	test_f5_1[] = "Hola";
	char	test_f5_2[] = "57555";
	char	test_f5_3[] = "";
	char	test_f5_4[] = "\0";
	char	test_f5_5[] = "\\0";
	char	test_f6[4];
	char	test_f6_2[4];
	char	test_f7[] = "Hey dude";
	char	test_f7_2[] = "Hey dude";
	char	test_f8_src[] = "Aupa";
	char	test_f8_dst[6];
	char	test_f8_2_src[] = "Aupa";
	char	test_f8_2_dst[6];
	char	test_f9_src[] = "Aupa";
	char	test_f9_dst[6];
	char	test_f9_2_src[] = "Aupa";
	char	test_f9_2_dst[6];
	char	test_f10_src[] = "Hola";
	char	test_f10_2_src[] = "Hola";
	char	test_f10_dst[5];
	char	test_f10_2_dst[5];
	char	test_f11_src[] = "amigos";
	char	test_f11_2_src[] = "amigos";
	char	test_f11_dst[] = "Hola ";
	char	test_f11_2_dst[] = "Hola ";
	char	test_to = 'h';
	char	test_f14_s[] = "HOLA";
	char	test_f14_c = 'L';
	char	test_f15_s[] = "coche";
	char	test_f15_c = 'c';
	char	test_f16_s1[] = "ABC";
	char	test_f16_s2[] = "ABC";
	char	test_f17_s[] = "Coche";
	char	test_f17_c = 'c';
	char	test_f18_s1[] = "ABC";
	char	test_f18_s2[] = "ABC";
	char	test_f19_b[] = "Hoy hace sol";
	char	test_f19_l[] = "hace";
	char	test_f20[] = "+54343";
	int		test_f21 = 5;
	char	*test_f22_s;
	char	*test_f22_c;
	char	*test_f22_2_s;
	char	*test_f22_2_c;
	int		func_select;
	void	*func[] = {&&f0, &&f1, &&f2, &&f3, &&f4, &&f5, &&f6,
						&&f7, &&f8, &&f9, &&f10, &&f11, &&f12, &&f13,
						&&f14, &&f15, &&f16, &&f17, &&f18, &&f19, &&f20, &&f21, &&f22};

	func_select = 0;
	printf("Que funcion quieres probar? [0/22]: ");
	scanf("%d", &func_select);

	if (func_select > 22)
		return (0);

	goto	* func[func_select];

	f0: // ISALPHA
	printf("\x1B[4misalpha\x1B[0m\n");
	printf("TEST 1 --→\n");
	printf("CUSTOM: %d\n", ft_isalpha(test_is_1));
	printf("ORIGIN: %d\n", isalpha(test_is_1));
	printf("TEST 2 --→\n");
	printf("CUSTOM: %d\n", ft_isalpha(test_is_2));
	printf("ORIGIN: %d\n", isalpha(test_is_2));
	printf("TEST 3 --→\n");
	printf("CUSTOM: %d\n", ft_isalpha(test_is_3));
	printf("ORIGIN: %d\n", isalpha(test_is_3));
	printf("TEST 4 --→\n");
	printf("CUSTOM: %d\n", ft_isalpha(test_is_4));
	printf("ORIGIN: %d\n", isalpha(test_is_4));
	printf("TEST 5 --→\n");
	printf("CUSTOM: %d\n", ft_isalpha(test_is_5));
	printf("ORIGIN: %d\n", isalpha(test_is_5));
	main();
	f1: // ISDIGIT
	printf("\x1B[4misdigit\x1B[0m\n");
	printf("TEST 1 --→\n");
	printf("CUSTOM: %d\n", ft_isdigit(test_is_1));
	printf("ORIGIN: %d\n", isdigit(test_is_1));
	printf("TEST 2 --→\n");
	printf("CUSTOM: %d\n", ft_isdigit(test_is_2));
	printf("ORIGIN: %d\n", isdigit(test_is_2));
	printf("TEST 3 --→\n");
	printf("CUSTOM: %d\n", ft_isdigit(test_is_3));
	printf("ORIGIN: %d\n", isdigit(test_is_3));
	printf("TEST 4 --→\n");
	printf("CUSTOM: %d\n", ft_isdigit(test_is_4));
	printf("ORIGIN: %d\n", isdigit(test_is_4));
	printf("TEST 5 --→\n");
	printf("CUSTOM: %d\n", ft_isdigit(test_is_5));
	printf("ORIGIN: %d\n", isdigit(test_is_5));
	main();
	f2: // ISALNUM
	printf("\x1B[4misalnum\x1B[0m\n");
	printf("TEST 1 --→\n");
	printf("CUSTOM: %d\n", ft_isalnum(test_is_1));
	printf("ORIGIN: %d\n", isalnum(test_is_1));
	printf("TEST 2 --→\n");
	printf("CUSTOM: %d\n", ft_isalnum(test_is_2));
	printf("ORIGIN: %d\n", isalnum(test_is_2));
	printf("TEST 3 --→\n");
	printf("CUSTOM: %d\n", ft_isalnum(test_is_3));
	printf("ORIGIN: %d\n", isalnum(test_is_3));
	printf("TEST 4 --→\n");
	printf("CUSTOM: %d\n", ft_isalnum(test_is_4));
	printf("ORIGIN: %d\n", isalnum(test_is_4));
	printf("TEST 5 --→\n");
	printf("CUSTOM: %d\n", ft_isalnum(test_is_5));
	printf("ORIGIN: %d\n", isalnum(test_is_5));
	main();
	f3: // ISASCII
	printf("\x1B[4misascii\x1B[0m\n");
	printf("TEST 1 --→\n");
	printf("CUSTOM: %d\n", ft_isascii(test_is_1));
	printf("ORIGIN: %d\n", isascii(test_is_1));
	printf("TEST 2 --→\n");
	printf("CUSTOM: %d\n", ft_isascii(test_is_2));
	printf("ORIGIN: %d\n", isascii(test_is_2));
	printf("TEST 3 --→\n");
	printf("CUSTOM: %d\n", ft_isascii(test_is_3));
	printf("ORIGIN: %d\n", isascii(test_is_3));
	printf("TEST 4 --→\n");
	printf("CUSTOM: %d\n", ft_isascii(test_is_4));
	printf("ORIGIN: %d\n", isascii(test_is_4));
	printf("TEST 5 --→\n");
	printf("CUSTOM: %d\n", ft_isascii(test_is_5));
	printf("ORIGIN: %d\n", isascii(test_is_5));
	main();
	f4: // ISPRINT
	printf("\x1B[4misprint\x1B[0m\n");
	printf("TEST 1 --→\n");
	printf("CUSTOM: %d\n", ft_isprint(test_is_1));
	printf("ORIGIN: %d\n", isprint(test_is_1));
	printf("TEST 2 --→\n");
	printf("CUSTOM: %d\n", ft_isprint(test_is_2));
	printf("ORIGIN: %d\n", isprint(test_is_2));
	printf("TEST 3 --→\n");
	printf("CUSTOM: %d\n", ft_isprint(test_is_3));
	printf("ORIGIN: %d\n", isprint(test_is_3));
	printf("TEST 4 --→\n");
	printf("CUSTOM: %d\n", ft_isprint(test_is_4));
	printf("ORIGIN: %d\n", isprint(test_is_4));
	printf("TEST 5 --→\n");
	printf("CUSTOM: %d\n", ft_isprint(test_is_5));
	printf("ORIGIN: %d\n", isprint(test_is_5));
	main();
	f5: // STRLEN
	printf("\x1B[4mstrlen\x1B[0m\n");
	printf("TEST 1 --→\n");
	printf("CUSTOM: %ld\n", ft_strlen(test_f5_1));
	printf("ORIGIN: %ld\n", strlen(test_f5_1));
	printf("TEST 2 --→\n");
	printf("CUSTOM: %ld\n", ft_strlen(test_f5_2));
	printf("ORIGIN: %ld\n", strlen(test_f5_2));
	printf("TEST 3 --→\n");
	printf("CUSTOM: %ld\n", ft_strlen(test_f5_3));
	printf("ORIGIN: %ld\n", strlen(test_f5_3));
	printf("TEST 4 --→\n");
	printf("CUSTOM: %ld\n", ft_strlen(test_f5_4));
	printf("ORIGIN: %ld\n", strlen(test_f5_4));
	printf("TEST 5 --→\n");
	printf("CUSTOM: %ld\n", ft_strlen(test_f5_5));
	printf("ORIGIN: %ld\n", strlen(test_f5_5));
	main();
	f6: // MEMSET
	printf("\x1B[4mmemset\x1B[0m\n");
	printf("CUSTOM BUFFER BEFORE: %s\n", test_f6);
	printf("ORIGIN BUFFER BEFORE: %s\n", test_f6_2);
	ft_memset(test_f6, 'a', 7);
	memset(test_f6_2, 'a', 7);
	printf("CUSTOM BUFFER AFTER: %s\n", test_f6);
	printf("ORIGIN BUFFER AFTER: %s\n", test_f6_2);
	main();
	f7: // BZERO
	printf("\x1B[4mbzero\x1B[0m\n");
	printf("CUSTOM BUFFER BEFORE: %s\n", test_f7);
	printf("ORIGIN BUFFER BEFORE: %s\n", test_f7_2);
	ft_bzero(test_f7, 3);
	bzero(test_f7_2, 3);
	printf("CUSTOM BUFFER AFTER: %s\n", test_f7[3]);
	printf("ORIGIN BUFFER AFTER: %s\n", test_f7_2[3]);
	main();
	f8: // MEMCPY
	printf("\x1B[4mmemcpy\x1B[0m\n");
	printf("CUSTOM BUFFER BEFORE: %s\n", test_f8_dst);
	printf("ORIGIN BUFFER BEFORE: %s\n", test_f8_2_dst);
	ft_memcpy(test_f8_dst, test_f8_src, 3);
	memcpy(test_f8_2_dst, test_f8_2_src, 3);
	printf("CUSTOM BUFFER AFTER: %s\n", test_f8_dst);
	printf("ORIGIN BUFFER AFTER: %s\n", test_f8_2_dst);
	main();
	f9: // MEMMOVE
	printf("\x1B[4mmemmove\x1B[0m\n");
	printf("CUSTOM BUFFER BEFORE: %s\n", test_f9_dst);
	printf("ORIGIN BUFFER BEFORE: %s\n", test_f9_2_dst);
	ft_memmove(test_f9_dst, test_f9_src, 3);
	memmove(test_f9_2_dst, test_f9_2_src, 3);
	printf("CUSTOM BUFFER AFTER: %s\n", test_f9_dst);
	printf("ORIGIN BUFFER AFTER: %s\n", test_f9_2_dst);
	main();
	f10: // STRLCPY
	printf("\x1B[4mstrlcpy\x1B[0m\n");
	printf("CUSTOM SRC BUFFER BEFORE: %s\n", test_f10_src);
	printf("CUSTOM DST BUFFER BEFORE: %s\n", test_f10_dst);
	printf("%ld\n", ft_strlcpy(test_f10_dst, test_f10_src, 5));
	printf("CUSTOM SRC BUFFER AFTER: %s\n", test_f10_src);
	printf("CUSTOM DST BUFFER AFTER: %s\n", test_f10_dst);
	main();
	f11: // STRLCAT
	printf("\x1B[4mstrlcat\x1B[0m\n");
	printf("CUSTOM SRC BUFFER BEFORE: %s\n", test_f11_src);
	printf("CUSTOM DST BUFFER BEFORE: %s\n", test_f11_dst);
	printf("%ld\n", ft_strlcat(test_f11_dst, test_f11_src, 5));
	printf("CUSTOM SRC BUFFER AFTER: %s\n", test_f11_src);
	printf("CUSTOM DST BUFFER AFTER: %s\n", test_f11_dst);
	main();
	f12: // TOUPPER
	printf("\x1B[4mtoupper\x1B[0m\n");
	printf("CUSTOM: %c\n", ft_toupper(test_to));
	printf("ORIGIN: %c\n", toupper(test_to));
	main();
	f13: // TOLOWER
	printf("\x1B[4mtolower\x1B[0m\n");
	printf("CUSTOM: %c\n", ft_tolower(test_to));
	printf("ORIGIN: %c\n", tolower(test_to));
	main();
	f14: // STRCHR
	printf("\x1B[4mstrchr\x1B[0m\n");
	printf("CUSTOM: %s\n", ft_strchr(test_f14_s, test_f14_c));
	printf("ORIGIN: %s\n", strchr(test_f14_s, test_f14_c));
	main();
	f15: // STRRCHR
	printf("\x1B[4mstrrchr\x1B[0m\n");
	printf("CUSTOM: %s\n", ft_strrchr(test_f15_s, test_f15_c));
	printf("ORIGIN: %s\n", strrchr(test_f15_s, test_f15_c));
	main();
	f16: // STRNCMP
	printf("\x1B[4mstrncmp\x1B[0m\n");
	printf("CUSTOM: %d\n", ft_strncmp(test_f16_s1, test_f16_s2, 3));
	printf("ORIGIN: %d\n", strncmp(test_f16_s1, test_f16_s2, 3));
	main();
	f17: // MEMCHR
	printf("\x1B[4mmemchr\x1B[0m\n");
	printf("CUSTOM: %p\n", ft_memchr(test_f17_s, test_f17_c, 4));
	printf("ORIGIN: %p\n", memchr(test_f17_s, test_f17_c, 4));
	main();
	f18: // MEMCMP
	printf("\x1B[4mmemcmp\x1B[0m\n");
	printf("CUSTOM: %d\n", ft_memcmp(test_f18_s1, test_f18_s2, 3));
	printf("ORIGIN: %d\n", memcmp(test_f18_s1, test_f18_s2, 3));
	main();
	f19: // STRNSTR
	printf("\x1B[4mstrnstr\x1B[0m\n");
	printf("CUSTOM: %s\n", ft_strnstr(test_f19_b, test_f19_l, 15));
	main();
	f20: // ATOI
	printf("\x1B[4matoi\x1B[0m\n");
	printf("CUSTOM: %d\n", ft_atoi(test_f20));
	printf("ORIGIN: %d\n", atoi(test_f20));
	main();
	f21: // CALLOC
	printf("\x1B[4mcalloc\x1B[0m\n");
	printf("CUSTOM: %p\n", ft_calloc(test_f21, sizeof(char)));
	printf("ORIGIN: %p\n", calloc(test_f21, sizeof(char)));
	main();
	f22: // STRDUP
	printf("\x1B[4mstrdup\x1B[0m\n");
	test_f22_c = ft_strdup(test_f22_s);
	if (test_f22_c == NULL)
		printf("Error\n");
	printf("%s\n", test_f22_c);
	test_f22_2_c = strdup(test_f22_2_s);
	if (test_f22_2_c == NULL)
		printf("Error\n");
	printf("%s\n", test_f22_2_c);
	main();
}
