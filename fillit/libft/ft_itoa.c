/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 21:49:46 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/08 17:10:09 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int num)
{
	int		digits;

	digits = 0;
	while (num != 0)
	{
		digits++;
		num /= 10;
	}
	return (digits);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	num;

	num = n;
	size = ft_count_digits(num);
	if (num <= 0)
	{
		size++;
		num *= -1;
	}
	if (!(str = ft_strnew(size + 1)))
		return (NULL);
	if (num == 0)
		str[--size] = '0';
	while (num != 0)
	{
		str[--size] = '0' + num % 10;
		num /= 10;
	}
	if (size == 1)
		str[--size] = '-';
	return (str);
}
