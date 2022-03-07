/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:25:48 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/06 23:34:18 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_table_print(int table[6][6])
{
	int	x;
	int	y;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			ft_write(table[y][x]);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

void	ft_table_print4(int table[4][4])
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_write(table[y][x]);
			if (x != 3)
			{
				write(1, " ", 1);
			}
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

void	ft_table_print_3d(int table[5][4][4], int s_z, int s_y, int s_x)
{
	int	x;
	int	y;
	int	z;

	z = 0;
	while (z < s_z)
	{
		y = 0;
		while (y < s_y)
		{
			x = 0;
			while (x < s_x)
			{	
				ft_write(table[z][y][x]);
				x++;
			}
			write(1, "\n", 1);
			y++;
		}
		z++;
		write(1, "\n", 1);
	}
}	

int	ft_game_possible(int table_reference[6][6])
{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (x < 6)
	{
		if ((table_reference[0][x] + table_reference[5][x]) >= 6)
			return (0);
		x++;
	}
	while (y < 6)
	{
		if ((table_reference[y][0] + table_reference[y][5]) >= 6)
			return (0);
		y++;
	}
	return (1);
}
