/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boardalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 04:18:32 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/24 23:09:37 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**boardalloc(int n)
{
	int		i;
	char	**board;
	int		point;

	i = 0;
	point = 0;
	board = (char **)malloc(sizeof(char *) * (n + 1));
	while (i < n)
	{
		board[i] = (char *)malloc(sizeof(char) * (n + 1));
		while (point < n)
		{
			board[i][point] = '.';
			point++;
		}
		board[i][point] = '\0';
		point = 0;
		i++;
	}
	board[i] = NULL;
	return (board);
}
