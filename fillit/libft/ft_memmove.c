/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 13:52:10 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/06 13:33:05 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	char	*dest;
	char	*src;
	size_t	i;

	dest = (char *)str1;
	src = (char *)str2;
	i = 0;
	if (dest > src)
		while (len > 0)
		{
			*(dest + len - 1) = *(src + len - 1);
			len--;
		}
	else
		while (i < len)
		{
			*(dest + i) = *(src + i);
			i++;
		}
	return (dest);
}
