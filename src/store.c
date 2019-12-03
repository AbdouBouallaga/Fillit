/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 21:20:36 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/31 15:03:55 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**store(char **av, int lines)
{
	char	**tetri;
	int		fd;
	char	*line;
	int		n;
	int		i;

	i = 0;
	n = 0;
	if (!(tetri = (char **)malloc(sizeof(char *) * lines)))
		return (0);
	fd = open(*av, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		tetri[n] = ft_strdup(line);
		free(line);
		n++;
	}
	close(fd);
	return (tetri);
}
