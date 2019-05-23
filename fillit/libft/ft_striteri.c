/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 11:19:14 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/13 16:57:37 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	l;
	unsigned int	i;

	if (s && f)
	{
		l = ft_strlen(s);
		i = 0;
		while (i < l)
		{
			f(i, &s[i]);
			i++;
		}
	}
}
