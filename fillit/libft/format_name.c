/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_name.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 12:17:31 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/11 20:21:13 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static char		*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + 1));
	return (str);
}

static int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

char			*format_name(char *str)
{
	char	*new_str;
	int		i;
	int		c;

	new_str = ft_strnew(ft_strlen(str));
	i = 0;
	while (str[i])
	{
		new_str[i] = ft_toupper(str[i]);
		i++;
	}
	return (new_str);
}
