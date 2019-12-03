/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:58:20 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/26 11:51:18 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		fillit(int totallines, char **tetri)
{
	int ***tetritable;
	int countcheckfile;
	int debug;

	countcheckfile = 0;
	debug = 0;
	tetritable = NULL;
	if (!(tetritable = buildtetri(tetri, totallines, tetritable)))
		return (0);
	solverstart(&tetritable, ((totallines + 1) / 5));
	return (0);
}
