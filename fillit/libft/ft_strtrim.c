/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 12:37:01 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/13 16:59:26 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trimmed;
	int		start;
	int		end;
	int		i;

	if (!s)
		return (NULL);
	start = 0;
	while (*(s + start) == ' ' || *(s + start) == '\n' || *(s + start) == '\t')
		start++;
	end = ft_strlen(s);
	end--;
	while (end > start && (*(s + end) == ' ' || *(s + end) == '\n' ||
				*(s + end) == '\t'))
		end--;
	if (!(trimmed = ft_strnew(end - start + 1)))
		return (NULL);
	i = 0;
	while (start <= end)
	{
		*(trimmed + i) = *(s + start);
		start++;
		i++;
	}
	return (trimmed);
}
