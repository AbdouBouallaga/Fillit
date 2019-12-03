/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reallocboard.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 10:22:20 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/26 10:49:33 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**reallocboard(char **tab, int len)
{
	char **board;

	freetab2d(tab, len - 1);
	board = boardalloc(len);
	return (board);
}
