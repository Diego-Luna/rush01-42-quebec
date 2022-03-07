/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:45:59 by raruiz-r          #+#    #+#             */
/*   Updated: 2022/03/06 23:29:08 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_table_rest(int table[4][4])
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			table[y][x] = 0;
			x++;
		}
		y++;
	}
}

void	ft_add_constant(int table[4][4], int x_y[2], int v)
{
	if (x_y[1] == 0)
	{
		table[0][x_y[0] - 1] = v;
	}
	else if (x_y[1] == 5)
	{
		table[3][x_y[0] - 1] = v;
	}
	else if (x_y[1] >= 1 && x_y[1] <= 4 && x_y[0] == 0)
	{
		table[x_y[1] - 1][0] = v;
	}
	else if (x_y[1] >= 1 && x_y[1] <= 4 && x_y[0] == 5)
	{
		table[x_y[1] - 1][3] = v;
	}
}

void	ft_table_constant(int table[4][4], int t_r[6][6])
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
				ft_add_constant(table, x_y, 1);
			}
			else if (t_r[y][x] == 1)
			{
				ft_add_constant(table, x_y, 4);
			}
			x++;
		}
		y++;
	}
}
