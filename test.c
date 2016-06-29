/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhaquet <nhaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 13:42:06 by nhaquet           #+#    #+#             */
/*   Updated: 2016/06/29 19:45:30 by nhaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libfts.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define OK "\033[34;01mOK\033[00m\n"
#define KO "\033[31;01mKO\033[00m\n"

void	print_tab(char *v, char *s, int size)
{
	int		i;

	printf("%s = ['%d'", v, s[0]);
	i = 1;
	while (i < size)
	{
		printf(", '%d'", s[i]);
		i++;
	}
	printf("]\n");
}

int		test_strlen(void)
{
	char	*s = "bonjour les enfants";

	printf("strlen(\"\")\n");
	if (strlen("") != ft_strlen(""))
	{
		printf("strlen(\"\") = %lu\nft_strlen(\"\")%lu\n", strlen(""), ft_strlen(""));
		return (0);
	}
	printf("strlen(\"%s\")\n", s);
	if (strlen(s) != ft_strlen(s))
	{
		printf("strlen(\"%s\") = %lu\nft_strlen(\"%s\")%lu\n", s, strlen(""), s, ft_strlen(""));
		return (0);
	}
	return (1);

}


int		test_strcat(void)
{
	int		i;
	char	str1[10] = "\0\0\0\0\0\0\0\0\0\0";
	char	str2[10] = "\0\0\0\0\0\0\0\0\0\0";
	char	*str3 = "coca";

	print_tab("str1", str1, 10);
	printf("strcat(str1, \"\")");
	strcat(str1, "");
	if (ft_strcat(str2, "") != str2)
		return (0);
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			printf("%s\n",KO);
			return (0);
		}
		i++;
	}
	printf(" = %s",OK);
	printf("strcat(str1 + 2, \"coca\")");
	strcat(str1 + 2, str3);
	if (ft_strcat(str2 + 2, str3) != str2 + 2)
		return (0);
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			printf("%s\n",KO);
			return (0);
		}
		i++;
	}
	printf(" = %s",OK);
	printf("strcat(str1, \"coca\")");
	strcat(str1, str3);
	if (ft_strcat(str2, str3) != str2)
		return (0);
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			printf("%s\n",KO);
			return (0);
		}
		i++;
	}
	printf(" = %s",OK);
	printf("strcat(str1, \"coca\")");
	strcat(str1, str3);
	if (ft_strcat(str2, str3) != str2)
		return (0);
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			printf("%s\n",KO);
			return (0);
		}
		i++;
	}
	printf("\n all = %s",OK);
	return (1);
}

void testBzero(void)
{
	char	str1[15] = "y5hgeeththrt";
	char	str2[15] = "ferhthrhrthr";
	int		ret;

	ret = 0;
	printf("_test bzero_\n\nbzero.s:\n");
	ret = strlen(str1);
	printf("%d\n", ret);
	ft_bzero(str1, 3);
	ret = strlen(str1);
	printf("%d\n", ret);
	printf("bzero.c:\n");
	ret = 0;
	ret = strlen(str2);
	printf("%d\n",ret);
	bzero(str2, 3);
	ret = strlen(str2);
	printf("%d\n",ret);
}

void testIsAlnum(void)
{


	int		c;
	int		bolalpha = 1;
	int		boldigit = 1;
	int		bolalnum = 1;
	int		bolascii = 1;
	int		bolprint = 1;
	int		bolupper = 1;
	int		bollower = 1;

	c = -127;
	while (c <= 127)
	{
		if ((isalpha(c) != 0) != (ft_isalpha(c) != 0))
			bolalpha = 0;
		if ((isdigit(c) != 0) != (ft_isdigit(c) != 0))
			boldigit = 0;
		if ((isalnum(c) != 0) != (ft_isalnum(c) != 0))
			bolalnum = 0;
		if ((isascii(c) != 0) != (ft_isascii(c) != 0))
			bolascii = 0;
		if ((isprint(c) != 0) != (ft_isprint(c) != 0))
			bolprint = 0;
		if ((c >= 0) && (toupper(c) != ft_toupper(c)))
			bolupper = 0;
		if ((c >= 0) && (tolower(c) != ft_tolower(c)))
			bollower = 0;
		c++;
	}
	printf("ft_isalpha : %s", bolalpha ? OK : KO);
	printf("ft_isdigit : %s", boldigit ? OK : KO);
	printf("ft_isalnum : %s", bolalnum ? OK : KO);
	printf("ft_isascii : %s", bolascii ? OK : KO);
	printf("ft_isprint : %s", bolprint ? OK : KO);
	printf("ft_toupper : %s", bolupper ? OK : KO);
	printf("ft_tolower : %s", bollower ? OK : KO);
}
void test_puts() {
	printf("test ft_puts:\n");
	puts("lol");
	puts("");
	ft_puts("lol");
	ft_puts("");
}

int	test_memset(void)
{
	int		i;
	char	str1[10] = "0000000000";
	char	str2[10] = "0000000000";

	print_tab("str1", str1, 10);
	printf("memset(str1, 'a', 10)\n");

	memset(str1, 'a', 10);
	printf("%p\n%p\n", ft_memset(str2, 'a', 10) , str2);
	if ( ft_memset(str2, 'a', 10) != str2){
		return (0);}
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			return (0);
		}
		i++;
	}
	printf("= %s",OK);
	printf("memset(str1 + 3, 'a', 1)\n");
	memset(str1 + 3, 'b', 1);
	printf("%p\n%p\n", ft_memset(str2, 'a', 10) , str2);
	if (ft_memset(str2 + 3, 'b', 1) != (str2 + 3))
		return (0);
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			return (0);
		}
		i++;
	}
	printf("= %s",OK);
	print_tab("str1", str1, 10);
	print_tab("str2", str2, 10);
	printf("all = %s",OK);
	return (1);
}
int		test_memcpy(void)
{
	int		i;
	char	str1[10] = "\0\0\0\0\0\0\0\0\0\0";
	char	str2[10] = "\0\0\0\0\0\0\0\0\0\0";
	char	*str3 = "coca cola";

	print_tab("str1", str1, 10);
	printf("memcpy(str1, str1, 5)");
	memcpy(str1, str1, 5);
	if (ft_memcpy(str2, str2, 5) != str2)
		return (0);
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			return (0);
		}
		i++;
	}
	printf("= %s",OK);
	printf("memcpy(str1 + 2, \"coca cola\", 3)");
	memcpy(str1 + 2, str3, 3);
	if (ft_memcpy(str2 + 2, str3, 3) != str2 + 2)
		return (0);
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			return (0);
		}
		i++;
	}
	printf("= %s",OK);
	printf("memcpy(str1, \"coca cola\", 4)");
	memcpy(str1, str3, 4);
	if (ft_memcpy(str2, str3, 4) != str2)
		return (0);
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			return (0);
		}
		i++;
	}
	printf("= %s",OK);
	printf("memcpy(str1 + 2, \"coca cola\", 5)");
	memcpy(str1 + 2, str3, 5);
	if (ft_memcpy(str2 + 2, str3 , 5) != str2 + 2)
		return (0);
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			return (0);
		}
		i++;
	}
	printf("= %s",OK);
	printf("memcpy(str1, \"coca cola\", 10)");
	memcpy(str1, str3, 10);
	if (ft_memcpy(str2, str3 , 10) != str2)
		return (0);
	i = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
		{
			print_tab("str1", str1, 10);
			print_tab("str2", str2, 10);
			return (0);
		}
		i++;
	}
	printf("= %s",OK);
	print_tab("str1", str1, 10);
	print_tab("str2", str2, 10);
	printf("all= %s",OK);
	return (1);
}

int		test_strdup(void)
{
	int		i;
	char	*s = "test du bzero";
	char	*s1;
	char	*s2;

	printf("strdup(\"\")");
	s1 = strdup("");
	s2 = ft_strdup("");
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
	{
		printf("strdup(\"\") = %s\nft_strdup(\"\")%s\n", s1, s2);
		free(s1);
		free(s2);
		return (0);
	}
	free(s1);
	free(s2);
	printf("= %s",OK);
	printf("strdup(\"%s\")", s);
	s1 = strdup(s);
	s2 = ft_strdup(s);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
	{
		printf("strdup(\"\") = %s\nft_strdup(\"\")%s\n", s1, s2);
		free(s1);
		free(s2);
		return (0);
	}
	free(s1);
	free(s2);
	printf("= %s",OK);
	return (1);
}

int main(void)
{
	int		i;
	i = 0;
	i = i + test_strlen();
	testBzero();
	testIsAlnum();
	i = i + test_strcat();
	test_puts();
	i = i + test_memset();
	i = i + test_memcpy();
	i = i + test_strdup();
	if(i == 5)
		printf("all test %s",OK);
	else
		printf("%s",KO);
	return (0);
}
