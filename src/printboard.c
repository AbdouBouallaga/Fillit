/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printboard.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 05:52:27 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/25 13:17:19 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		printboard(char **board)
{
	int i;

	i = 0;
	while (board[i])
	{
		ft_putstr(board[i]);
		ft_putchar('\n');
		i++;
	}
	return (1);
}
