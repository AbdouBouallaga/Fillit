/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countlines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 02:15:32 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/27 16:19:33 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		countlines(char **av)
{
	char	*line;
	int		lines;
	int		fd;

	lines = 0;
	fd = open(*av, O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		lines++;
		free(line);
	}
	close(fd);
	if (lines > 129)
		return (0);
	else
		return (lines);
}
