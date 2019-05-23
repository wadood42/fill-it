/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_letter_counter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 16:54:18 by awoodod           #+#    #+#             */
/*   Updated: 2019/03/11 19:51:25 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	double_letter_counter(char *s)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == s[i + 1])
		{
			counter += 1;
		}
		return (counter);
	}
}
