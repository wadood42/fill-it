/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:58:40 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/13 16:58:52 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*strsub;

	if (!s)
		return (NULL);
	strsub = ft_strnew(len);
	if (strsub == NULL)
		return (NULL);
	strsub = ft_strncpy(strsub, &s[start], len);
	return (strsub);
}
