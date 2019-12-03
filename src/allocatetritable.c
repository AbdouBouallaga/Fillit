/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocatetritable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:42:23 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/26 11:09:40 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		***allocatetritable(int ***tetritable, int tetriminember)
{
	int i;
	int j;

	i = -1;
	if (!(tetritable = (int ***)malloc(sizeof(int **) * (tetriminember + 1))))
		return (0);
	tetritable[tetriminember] = NULL;
	while (++i < tetriminember)
	{
		if (!(tetritable[i] = (int **)malloc(sizeof(int *) * 5)))
			return (0);
		tetritable[i][4] = NULL;
	}
	i = -1;
	while (++i < tetriminember)
	{
		j = -1;
		while (++j < 4)
			if (!(tetritable[i][j] = (int *)malloc(sizeof(int) * 2)))
				return (0);
	}
	return (tetritable);
}
