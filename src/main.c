/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 15:10:48 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/27 03:38:05 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	**tetri;
	int		totallines;

	if (ac == 2)
	{
		totallines = countlines(&av[1]);
		tetri = store(&av[1], totallines);
		if (checkfile(tetri, totallines) &&
				checktetri(tetri, totallines))
			fillit(totallines, tetri);
		else
		{
			freetab2d(tetri, totallines);
			ft_putstr("error\n");
			return (0);
		}
		freetab2d(tetri, totallines);
	}
	else
		ft_putstr("Usage Fillit : ./fillit 'FILE'\n");
	return (0);
}
