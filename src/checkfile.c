/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkfile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 07:38:35 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/31 15:20:33 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_filecheck		reinit(t_filecheck var)
{
	var.pass = 0;
	var.hashcount = 0;
	var.y++;
	return (var);
}

int						checkfile(char **tetri, int totallines)
{
	t_filecheck var;

	var.y = -1;
	var.pass = 0;
	var.hashcount = 0;
	while (++var.y < totallines && (var.x = -1))
	{
		while (++var.x < 4)
		{
			if ((tetri[var.y][var.x] != '#' && tetri[var.y][var.x] != '.') ||
			tetri[var.y][4] != '\n')
				return (0);
			((tetri[var.y][var.x] == '#') ? var.hashcount++ : var.hashcount);
		}
		var.pass++;
		if ((var.x != 4) || (var.pass == 4 && var.hashcount != 4) ||
			((var.y + 1) == totallines && var.pass != 4))
			return (0);
		if (var.pass == 4)
			var = reinit(var);
		if ((var.y < totallines) && !((var.y + 1) % 5) &&
				tetri[var.y][0] != '\n')
			return (0);
	}
	return (1);
}
