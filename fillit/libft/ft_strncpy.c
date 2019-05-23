/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 10:38:10 by awoodod           #+#    #+#             */
/*   Updated: 2019/02/17 15:32:19 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = -1;
	while (++i < len)
		if (*(src + i))
			*(dest + i) = *(src + i);
		else
			while (i < len)
				*(dest + i++) = '\0';
	return (dest);
}
