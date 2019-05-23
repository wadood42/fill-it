/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 16:45:07 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/07 16:18:36 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;
	char	*ptr;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		k = i;
		ptr = &((char *)haystack)[k];
		while (needle[j] == haystack[k])
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
