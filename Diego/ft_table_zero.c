/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raruiz-r <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:45:59 by raruiz-r          #+#    #+#             */
/*   Updated: 2022/03/06 15:52:38 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

void    ft_check_impossibles(int table[5][4][4], int compa[4], int y, int x);
void	ft_table_rest(int table[5][4][4])
{
	int	z;
	int	x;
	int	y;

	z = 0;
	while (z < 5)
	{
		y = 0;
		while (y < 4)
		{
			x = 0;
			while (x < 4)
			{
				table[z][y][x] = 0;
				x++;
			}
			y++;
		}
		z++;
	}
}

void	ft_add_constant(int table[5][4][4], int t_r[6][6], int x_y[2], int v)
{
	if (x_y[1] == 0)
	{
		table[0][0][x_y[0] - 1] = v;
		t_r[1][x_y[0]] = v;
	}
	else if (x_y[1] == 5)
	{
		table[0][3][x_y[0] - 1] = v;
		t_r[4][x_y[0]] = v;
	}
	else if (x_y[1] >= 1 && x_y[1] <= 4 && x_y[0] == 0)
	{
		table[0][x_y[1] - 1][0] = v;
		t_r[x_y[1]][1] = v;
	}
	else if (x_y[1] >= 1 && x_y[1] <= 4 && x_y[0] == 5)
	{
		table[0][x_y[1] - 1][3] = v;
		t_r[x_y[1]][4] = v;
	}
}

void	ft_table_constant(int table[5][4][4], int t_r[6][6])
{
	int	x;
	int	y;
	int	x_y[2];

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			x_y[0] = x;
			x_y[1] = y;
			if (t_r[y][x] == 4)
			{
				ft_add_constant(table, t_r, x_y, 1);
			}
			else if (t_r[y][x] == 1)
			{
				ft_add_constant(table, t_r, x_y, 4);
			}
			x++;
		}
		y++;
	}
}

void	ft_put_tr_values(int values[4], int t_r[6][6], int y_x[2])
{
	values[0] = t_r[0][y_x[1]];
	values[1] = t_r[y_x[0]][0];
	values[2] = t_r[5][y_x[1]];
	values[3] = t_r[y_x[0]][5];
}

#include <stdio.h>
void	ft_loop_impossibles(int table[5][4][4], int t_r[6][6])
{
	int	x;
	int	y;
	int	y_x[2];
	int	value[4];

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			if (t_r[y][x] == 0 && x >= 1 && x <= 4 && y >= 1 && y <= 4)
			//if (t_r[y][x] == 0 && x == 2 && y == 1 )
			{
				y_x[0] = y;
				y_x[1] = x;
				ft_put_tr_values(value, t_r, y_x);
				printf("\n> Value:%d, posision y:%d, en x:%d\n" , value[0], (y - 1), (x - 1));
				ft_check_impossibles(table, value, (y - 1), (x - 1));
			}
			x++;
		}
		y++;
	}
}

void	ft_fusion_tables(int table[5][4][4], int x, int y)
{
	int	z;

	z = 1;
	while (z <= 5)
	{
		if (table[z][y][x] == 0)
		{
			break;
		}
		else
			z++;
	}
	
	table[0][y][x] = z;
	
}

void	ft_fusion_tables_loop(int table[5][4][4])
{
	int z;
	int y;
	int x;

	z = 1;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (table[0][y][x] == 0)
			{
				ft_fusion_tables(table, x, y);
			}
			x++;
		}
		y++;
	}
}
