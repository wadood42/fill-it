/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:47:26 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/13 16:58:17 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh_s;
	int		i;

	if (s && f)
	{
		fresh_s = ft_strnew(ft_strlen(s));
		if (fresh_s == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			fresh_s[i] = f(s[i]);
			i++;
		}
		fresh_s[i] = '\0';
		return (fresh_s);
	}
	return (NULL);
}
