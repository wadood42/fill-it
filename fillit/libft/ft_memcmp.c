/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 17:07:29 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/07 16:25:27 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1c;
	unsigned char	*str2c;
	size_t			i;

	str1c = (unsigned char *)str1;
	str2c = (unsigned char *)str2;
	i = 0;
	while (i < n && str1c[i] == str2c[i])
		i++;
	if (i == n)
		return (0);
	return (*(str1c + i) - *(str2c + i));
}
