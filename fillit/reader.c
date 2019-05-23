/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awoodod <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 13:20:42 by awoodod           #+#    #+#             */
/*   Updated: 2019/05/21 20:44:11 by awoodod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "includes/fillit.h"

void	min_max(char *buf, t_point *min, t_point *max)
{
	int i;

	i = 0;
	while (i < 20)
	{
		if (buf[i] == '#')
		{
			if (i / 5 < min->y)
				min->y = i / 5;
			if (i / 5 > max->y)
				max->y = i / 5;
			if (i % 5 < min->x)
				min->x = i % 5;
			if (i % 5 > max->x)
				max->x = i % 5;
		}
		i++;
	}
}

t_etris	*gt_pce(char *buf, char charactr)
{
	t_point	*mi;
	t_point *max;
	char	**po;
	int		i;
	t_etris	*tetris;

	mi = point_new(3, 3);
	max = point_new(0, 0);
	min_max(buf, mi, max);
	po = ft_memalloc(sizeof(char *) * max->y - mi->y + 1);
	i = 0;
	while (i < max->y - mi->y + 1)
	{
		po[i] = ft_strnew(max->x - mi->x + 1);
		ft_strncpy(po[i], buf + mi->x + (i + mi->y) * 5, max->x - mi->x + 1);
		i++;
	}
	tetris = tetris_new(po, max->x - mi->x + 1, max->y - mi->y + 1, charactr);
	ft_memdel((void **)&mi);
	ft_memdel((void **)&max);
	return (tetris);
}

int		check_connection(char *buf)
{
	int hashtags;
	int i;

	hashtags = 0;
	i = 0;
	while (i < 20)
	{
		if (buf[i] == '#')
		{
			if ((i + 1) < 20 && buf[i + 1] == '#')
				hashtags++;
			if ((i - 1) >= 0 && buf[i - 1] == '#')
				hashtags++;
			if ((i + 5) < 20 && buf[i + 5] == '#')
				hashtags++;
			if ((i - 5) >= 0 && buf[i - 5] == '#')
				hashtags++;
		}
		i++;
	}
	return (hashtags == 6 || hashtags == 8);
}

int		check_cnt(char *buf, int count)
{
	int i;
	int hashtags;

	hashtags = 0;
	i = 0;
	while (i < 20)
	{
		if (i % 5 < 4)
		{
			if (!(buf[i] == '#' || buf[i] == '.'))
				return (1);
			if (buf[i] == '#' && ++hashtags > 4)
				return (2);
		}
		else if (buf[i] != '\n')
			return (3);
		i++;
	}
	if (count == 21 && buf[20] != '\n')
		return (4);
	if (!check_connection(buf))
		return (5);
	return (0);
}

t_list	*read_tetrimino(int fd)
{
	char	*buf;
	int		cnt;
	t_list	*list;
	t_etris	*tetris;
	char	chr;

	buf = ft_strnew(21);
	list = NULL;
	chr = 'A';
	while ((cnt = read(fd, buf, 21)) >= 20)
	{
		if (check_cnt(buf, cnt) != 0 || (tetris = gt_pce(buf, chr++)) == NULL)
		{
			ft_memdel((void **)&buf);
			return (free_list(list));
		}
		ft_lstadd(&list, ft_lstnew(tetris, sizeof(t_etris)));
		ft_memdel((void **)&tetris);
	}
	ft_memdel((void **)&buf);
	if (cnt != 0)
		return (free_list(list));
	ft_lstrev(&list);
	return (list);
}
