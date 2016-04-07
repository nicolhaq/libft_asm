/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhaquet <nhaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 13:42:06 by nhaquet           #+#    #+#             */
/*   Updated: 2016/04/07 18:44:25 by nhaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libfts.h"
#include "./libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

int		my_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(void)
{
	char	*str1;
	int		ret;

	str1 = "lol";
	ret = my_strlen(str1);
	ft_putnbr(ret);
	ft_bzero(str1, 1);
	ret = my_strlen(str1);
	ft_putnbr(ret);
	return (0);
}
