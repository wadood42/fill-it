/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 13:20:53 by awoodod           #+#    #+#             */
/*   Updated: 2019/05/22 11:42:25 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "includes/fillit.h"

int		solve_map(t_map *map, t_list *list)
{
	int		x;
	int		y;
	t_etris	*tetri;

	if (list == NULL)
		return (1);
	y = 0;
	tetri = (t_etris *)(list->content);
	while (y < (map->size - tetri->height) + 1)
	{
		x = 0;
		while (x < map->size - tetri->width + 1)
		{
			if (place(tetri, map, x, y))
			{
				if (solve_map(map, list->next))
					return (1);
				else
					set_piece(tetri, map, point_new(x, y), '.');
			}
			x++;
		}
		y++;
	}
	return (0);
}

size_t	ft_lstcount(t_list *lst)
{
	size_t count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

int		roundup(int n)
{
	int size;

	size = 2;
	while (size * size < n)
		size++;
	return (size);
}

t_map	*solve(t_list *list)
{
	t_map	*map;
	int		size;

	size = roundup(ft_lstcount(list) * 4);
	map = map_new(size);
	while (!solve_map(map, list))
	{
		size++;
		free_map(map);
		map = map_new(size);
	}
	return (map);
}
