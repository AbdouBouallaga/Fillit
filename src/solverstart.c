/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solverstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 01:07:15 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/26 13:19:04 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	t_solverstart	init(t_solverstart var)
{
	var.x = 0;
	var.y = 0;
	var.i = 0;
	var.j = 0;
	return (var);
}

int						solverstart(int ****ttab, int tetrinumber)
{
	char			**board;
	t_solverstart	var;

	var.tetriber = tetrinumber;
	var.n = 2;
	var = init(var);
	while ((var.n * var.n) < (4 * tetrinumber))
		var.n++;
	board = boardalloc(var.n);
	while ((backtrack(board, *ttab, var, 0)) == 0)
	{
		board = reallocboard(board, ++var.n);
	}
	printboard(board);
	freetab2d(board, var.n);
	freetab3d(*ttab, tetrinumber);
	return (1);
}
