/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defragment.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 22:02:17 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/26 11:07:21 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*defragment(char **tetri, int min[2], int y)
{
	int i;
	int j;

	min[0] = 10;
	min[1] = 10;
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if ((tetri[y + i][j] == '#') && (j < min[0]))
				min[0] = j;
			if ((tetri[y + i][j] == '#') && (i < min[1]))
				min[1] = i;
			j++;
		}
		j = 0;
		i++;
	}
	return (min);
}
