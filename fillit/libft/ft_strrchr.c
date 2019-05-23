/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 14:38:34 by awoodod           #+#    #+#             */
/*   Updated: 2019/02/20 15:09:08 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = (int)ft_strlen(s) + 1;
	while (i--)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}
