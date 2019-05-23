/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 15:59:14 by awoodod           #+#    #+#             */
/*   Updated: 2019/05/20 20:49:49 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrev(t_list **lst)
{
	t_list *prev_lst;
	t_list *current_lst;
	t_list *next_lst;

	prev_lst = NULL;
	current_lst = *lst;
	while (current_lst != NULL)
	{
		next_lst = current_lst->next;
		current_lst->next = prev_lst;
		prev_lst = current_lst;
		current_lst = next_lst;
	}
	*lst = prev_lst;
}
