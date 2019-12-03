/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buildtetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:45:26 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/26 11:37:02 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_buildtetri		reinit(t_buildtetri var, int tlines)
{
	var.tetriminember = 0;
	var.tetriminos = 0;
	var.y = 0;
	var.oldy = 0;
	var.pass = 0;
	var.hash = 0;
	var.tetriminember = ((tlines + 1) / 5);
	return (var);
}

static t_buildtetri		flush(t_buildtetri var, char **tetri)
{
	var.y++;
	var.oldy = var.y;
	var.hash = 0;
	var.pass = 0;
	var.tetriminos++;
	defragment(tetri, var.min, var.y);
	return (var);
}

int						***buildtetri(char **tetri, int tlines, int ***ttab)
{
	t_buildtetri	var;

	var.x = -1;
	var = reinit(var, tlines);
	if (!(ttab = allocatetritable(ttab, var.tetriminember)))
		return (0);
	defragment(tetri, var.min, var.y);
	while (var.y < tlines)
	{
		while (++var.x < 4)
			if (tetri[var.y][var.x] == '#' && var.tetriminos < 26)
			{
				ttab[var.tetriminos][var.hash][0] =
					(var.x - var.min[0]);
				ttab[var.tetriminos][var.hash][1] =
					((var.y - var.oldy) - var.min[1]);
				var.hash++;
			}
		var.pass++;
		var.x = -1;
		var.y++;
		if (var.pass == 4 && var.y < 129 && var.y < tlines)
			var = flush(var, tetri);
	}
	return (ttab);
}
