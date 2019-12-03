/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freetab3d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 04:56:56 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/26 15:23:03 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	freetab3d(int ***tab, int len)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (i < len)
	{
		while (x < 4)
		{
			free(tab[i][x]);
			x++;
		}
		free(tab[i]);
		x = 0;
		i++;
	}
	free(tab);
}
