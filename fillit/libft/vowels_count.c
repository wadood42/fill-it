/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vowels_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 13:12:19 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/11 19:58:23 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	vowels_count(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i])
	{
		if (is_vowel(str[i]))
			counteri += 1;
		i++;
	}
	return (counter);
}
