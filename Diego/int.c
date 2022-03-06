/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:25:48 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/05 19:46:43 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int n)
{
	n += 48;
	write(1, &n, 1);
}

void	ft_table_print(int table[6][6], int size_x, int size_y)
{
	int	x;
	int	y;

	y = 0;
	while (y < size_y)
	{
		x = 0;
		while (x < size_x)
		{
			ft_write(table[y][x]);
			x++;
		}
		write(1, "\n", 1);
		y++;
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
