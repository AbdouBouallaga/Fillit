/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:20:17 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/26 10:45:39 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	boucle(t_checktetri *var, char **tetri,
		int *contactpoint, int totallines)
{
	while (++(var->x) < 4 && tetri[var->y][var->x])
		if (tetri[var->y][var->x] == '#')
		{
			if (var->x + 1 < 4 && (tetri[var->y][var->x + 1] == '#'))
				(*contactpoint)++;
			if (var->x > 0 && (tetri[var->y][var->x - 1] == '#'))
				(*contactpoint)++;
			if ((var->y + 1 < totallines) &&
					(tetri[var->y + 1][var->x] != '\n') &&
					(tetri[var->y + 1][var->x] == '#'))
				(*contactpoint)++;
			if (var->y > 0 && (tetri[var->y - 1][var->x] == '#'))
				(*contactpoint)++;
		}
}

int				checktetri(char **tetri, int totallines)
{
	t_checktetri	var;
	int				contactpoint;

	var.y = -1;
	contactpoint = 0;
	while (++var.y < totallines && (var.x = -1))
	{
		boucle(&var, tetri, &contactpoint, totallines);
		if (!((var.y + 1) % 5) && contactpoint < 6)
			return (0);
		else if (!((var.y + 1) % 5) && contactpoint >= 6)
			contactpoint = 0;
	}
	if (contactpoint >= 6)
		return (1);
	else
		return (0);
}
