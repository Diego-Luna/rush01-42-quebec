/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raruiz-r <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:45:59 by raruiz-r          #+#    #+#             */
/*   Updated: 2022/03/06 07:47:32 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

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

void	ft_add_constant(int table[5][4][4], int x_y[2], int value)
{
	if (x_y[1] == 0)
	{
		table[0][0][x_y[0] - 1] = value;
	}
	else if (x_y[1] == 5)
	{
		table[0][3][x_y[0] - 1] = value;
	}
	else if (x_y[1] >= 1 && x_y[1] <= 4 && x_y[0] == 0)
	{
		table[0][x_y[1] - 1][0] = value;
	}
	else if (x_y[1] >= 1 && x_y[1] <= 4 && x_y[0] == 5)
	{
		table[0][x_y[1] - 1][3] = value;
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

/*
void	ft_table_zero(int y, int x)
{
	int	*table_result[4][4];

	table_result[y][x] = malloc(4 * 4 * sizeof(int));
	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			y++;
		}
		x++;
	}	
	ft_put_table(y, x);
	free(table_result[y][x]);
}
*/
