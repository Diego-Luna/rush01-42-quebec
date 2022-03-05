/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:25:48 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/05 18:25:00 by dluna-lo         ###   ########.fr       */
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
