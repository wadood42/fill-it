/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 10:39:20 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/06 13:41:30 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;
	if (s1 && s2)
		res = ft_strcmp(s1, s2);
	if (res == 0)
		return (1);
	else
		return (0);
}
