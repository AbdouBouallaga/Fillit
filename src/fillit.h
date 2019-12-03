/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 21:34:27 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/27 05:17:42 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "../libft/libft.h"
# include "get_next_line.h"
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

typedef struct		s_filecheck
{
	int x;
	int y;
	int pass;
	int hashcount;

}					t_filecheck;

typedef struct		s_buildtetri
{
	int tetriminember;
	int min[2];
	int y;
	int x;
	int tetriminos;
	int hash;
	int pass;
	int oldy;
}					t_buildtetri;

typedef struct		s_solverstart
{
	int x;
	int y;
	int n;
	int tetriber;
	int i;
	int j;
}					t_solverstart;

typedef struct		s_checktetri
{
	int x;
	int y;
}					t_checktetri;

int					checkfile(char **tetri, int totallines);
char				**store(char **av, int lines);
int					fillit(int totallines, char **tetri);
char				**check(char ***av);
int					countlines(char **av);
int					buildstruct(char **tetri);
int					checktetri(char **tetri, int countlines);
int					***buildtetri(char **tetri, int totallines,
		int ***tetritable);
int					***allocatetritable(int ***tetritable, int totallines);
int					*defragment(char **tetri, int min[2], int y);
void				freetab2d(char **tab, int len);
void				freetab3d(int ***tab, int len);
int					solverstart(int ****ttab, int tetrinumber);
char				**boardalloc(int n);
int					printboard(char **board);
void				buildtetriwrite(int ****tetritable, t_buildtetri variable);
char				**reallocboard(char **tab, int len);
int					backtrack(char **board, int ***ttab,
		t_solverstart var, int l);

#endif
