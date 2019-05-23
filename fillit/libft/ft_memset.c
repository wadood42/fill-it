/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 16:39:36 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/06 13:58:42 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*pointer;
	int		i;

	pointer = b;
	i = 0;
	while (len > 0)
	{
		len--;
		pointer[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
