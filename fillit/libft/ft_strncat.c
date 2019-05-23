/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 08:58:20 by awoodod           #+#    #+#             */
/*   Updated: 2019/02/20 10:16:59 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	int	i;
	int	j;

	i = -1;
	j = (int)ft_strlen(str1);
	while (*(str2 + ++i) && i < (int)n)
	{
		*(str1 + j++) = *(str2 + i);
	}
	*(str1 + j) = '\0';
	return (str1);
}
