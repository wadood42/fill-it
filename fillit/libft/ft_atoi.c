/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 19:22:37 by awoodod           #+#    #+#             */
/*   Updated: 2019/05/16 16:04:04 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		start;
	int		i;
	long	res;
	int		negative;

	start = 0;
	while (str[start] != '\0' && (str[start] == ' ' || str[start] == '\t' ||
				str[start] == '\v' || str[start] == '\f' ||
				str[start] == '\r' || str[start] == '\n'))
		start++;
	i = start;
	res = 0;
	negative = 0;
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') ||
				(i == start && (str[i] == '-' || str[i] == '+'))))
	{
		if (str[i] == '-')
			negative = 1;
		if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10) + (str[i] - 48);
		i++;
	}
	if (negative)
		res *= -1;
	return (res);
}
