/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhaquet <nhaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 13:08:14 by nhaquet           #+#    #+#             */
/*   Updated: 2016/06/17 19:24:15 by nhaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H
# include <string.h>

void	ft_bzero(void *str, size_t len);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isprint(char c);
int		ft_isalpha(char c);
char	*ft_strcat(char *dest, const char *src);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *src);
int		ft_puts(const char *s);
#endif
