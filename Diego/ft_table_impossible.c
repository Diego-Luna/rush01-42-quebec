/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_impossible.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:08:42 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/06 15:56:44 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_impossibles_4(int table[5][4][4], int y_x[2], int value)
{
	if (table[4][y_x[0]][y_x[1]] == 0)
	{
		table[4][y_x[0]][y_x[1]] = value;
	}
}

void	ft_impossibles_3(int table[5][4][4], int y_x[2], int value)
{
	if (table[3][y_x[0]][y_x[1]] == 0)
	{
		table[3][y_x[0]][y_x[1]] = value;
	}
}

void	ft_impossibles_2(int table[5][4][4], int y_x[2], int value)
{
	if (table[2][y_x[0]][y_x[1]] == 0)
	{
		table[2][y_x[0]][y_x[1]] = value;
	}
}

void	ft_impossibles_1(int table[5][4][4], int y_x[2], int value)
{
	if (table[1][y_x[0]][y_x[1]] == 0)
	{
		table[1][y_x[0]][y_x[1]] = value;
	}
}

void	ft_terms_4(int table[5][4][4], int y_x[2])
{
	if (y_x[0] == 0)
	{
		ft_impossibles_4(table, y_x, 1);
		ft_impossibles_3(table, y_x, 1);
		ft_impossibles_2(table, y_x, 1);
	}
	if (y_x[0] == 1)
	{
		ft_impossibles_4(table, y_x, 1);
		ft_impossibles_3(table, y_x, 1);
		ft_impossibles_1(table, y_x, 1);
	}
	if (y_x[0] == 2)
	{
		ft_impossibles_4(table, y_x, 1);
		ft_impossibles_2(table, y_x, 1);
		ft_impossibles_1(table, y_x, 1);
	}
	if (y_x[0] == 3)
	{
		ft_impossibles_3(table, y_x, 1);
		ft_impossibles_2(table, y_x, 1);
		ft_impossibles_1(table, y_x, 1);
	}
}

void	ft_terms_3(int table[5][4][4], int y_x[2])
{
	if (y_x[0] == 0)
	{
		ft_impossibles_4(table, y_x, 1);
		ft_impossibles_3(table, y_x, 1);
	}
	if (y_x[0] == 1)
	{
		ft_impossibles_4(table, y_x, 1);
	}
	if (y_x[0] == 2)
	{
	}
	if (y_x[0] == 3)
	{
	}
}

void	ft_terms_2(int table[5][4][4], int y_x[2])
{
	if (y_x[0] == 0)
	{
		ft_impossibles_4(table, y_x, 1);
	}
	if (y_x[0] == 1)
	{
		ft_impossibles_3(table, y_x, 1);
	}
	if (y_x[0] == 2)
	{
	}
	if (y_x[0] == 3)
	{
	}

}

void	ft_terms_1(int table[5][4][4], int y_x[2])
{
	if (y_x[0] == 0)
	{
		ft_impossibles_3(table, y_x, 1);
		ft_impossibles_2(table, y_x, 1);
		ft_impossibles_1(table, y_x, 1);
	}
	if (y_x[0] == 1)
	{
		ft_impossibles_4(table, y_x, 1);
	}
	if (y_x[0] == 2)
	{
		ft_impossibles_4(table, y_x, 1);
	}
	if (y_x[0] == 3)
	{
		ft_impossibles_4(table, y_x, 1);
	}
}


void    ft_check_impossibles(int table[5][4][4], int compa[4], int y, int x)
{
	int y_x[2];

	y_x[0] = y;
	y_x[1] = x;
	if (compa[0] == 4)
		ft_terms_4(table, y_x);
	if (compa[0] == 3)
		ft_terms_3(table, y_x);
	if (compa[0] == 2)
		ft_terms_2(table, y_x);
	if (compa[0] == 1)
		ft_terms_1(table, y_x);
}
