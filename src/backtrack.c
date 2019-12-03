/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 09:39:19 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/26 11:34:03 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		verify(int **ttab, char **board, t_solverstart var)
{
	int tag;

	tag = -1;
	while (++tag < 4)
	{
		if ((ttab[tag][1] + var.i) >= var.n ||
		(ttab[tag][0] + var.j) >= var.n ||
				(board[ttab[tag][1] + var.i][ttab[tag][0] + var.j] != '.'))
			return (0);
	}
	return (1);
}

int		writein(int **ttab, char **board, t_solverstart var, int l)
{
	int tag;

	tag = 0;
	while (tag < 4)
	{
		if (board[ttab[tag][1] + var.i][ttab[tag][0] + var.j] == '.')
		{
			board[ttab[tag][1] + var.i][ttab[tag][0] + var.j] = (l + 65);
			tag++;
		}
	}
	return (1);
}

int		delfrom(int l, char **board, t_solverstart var)
{
	int i;
	int j;

	i = -1;
	while (++i < var.n)
	{
		j = -1;
		while (++j < var.n)
		{
			if (board[i][j] == (l + 65))
				board[i][j] = '.';
		}
	}
	return (1);
}

int		backtrack(char **board, int ***ttab, t_solverstart var, int l)
{
	int ret;

	var.i = -1;
	ret = 0;
	if (l == var.tetriber)
		return (1);
	while (++var.i < var.n)
	{
		var.j = -1;
		while (++var.j < var.n)
			if (verify(ttab[l], board, var))
			{
				writein(ttab[l], board, var, l);
				ret = 1;
				if (!backtrack(board, ttab, var, l + 1))
				{
					ret = 0;
					delfrom(l, board, var);
				}
				else
					return (1);
			}
	}
	return (ret);
}
