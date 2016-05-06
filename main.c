/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhaquet <nhaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 13:42:06 by nhaquet           #+#    #+#             */
/*   Updated: 2016/05/06 17:25:49 by nhaquet          ###   ########.fr       */
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

int		test_strcat(void)
{
	int		i;
	char	str1[10] = "\0\0\0\0\0\0\0\0\0\0";
	char	str2[10] = "\0\0\0\0\0\0\0\0\0\0";
	char	*str3 = "coca";

	print_tab("str1", str1, 10);
	printf("strcat(str1, \"\")\n");
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
			return (0);
		}
		i++;
	}
	printf("strcat(str1 + 2, \"coca\")\n");
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
			return (0);
		}
		i++;
	}
	printf("strcat(str1, \"coca\")\n");
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
			return (0);
		}
		i++;
	}
	printf("strcat(str1, \"coca\")\n");
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
			return (0);
		}
		i++;
	}
	print_tab("str1", str1, 10);
	print_tab("str2", str2, 10);
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
		if (isalpha(c) != ft_isalpha(c))
			bolalpha = 0;
		if (isdigit(c) != ft_isdigit(c))
			boldigit = 0;
		if (isalnum(c) != ft_isalnum(c))
			bolalnum = 0;
		if (isascii(c) != ft_isascii(c))
			bolascii = 0;
		if (isprint(c) != ft_isprint(c))
			bolprint = 0;
		if (toupper(c) != ft_toupper(c))
			bolupper = 0;
		if (tolower(c) != ft_tolower(c))
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

int main(void)
{
	testBzero();
	testIsAlnum();
	test_strcat();
	return (0);
}
