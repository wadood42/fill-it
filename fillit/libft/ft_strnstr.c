/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 21:59:05 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/01 21:59:20 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		k;
	char	*ptr;

	i = 0;
	while (haystack[i] && i < (int)len)
	{
		j = 0;
		k = i;
		ptr = &((char *)haystack)[k];
		while (needle[j] == haystack[k] && k < (int)len)
		{
			if (needle[j + 1] == '\0')
				return (ptr);
			j++;
			k++;
		}
		i++;
	}
	ptr = NULL;
	if (needle[0] == '\0')
		ptr = (char *)haystack;
	return (ptr);
}
