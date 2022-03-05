/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raruiz-r <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:58:18 by raruiz-r          #+#    #+#             */
/*   Updated: 2022/03/05 18:46:37 by raruiz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char print);

int	ft_what_print0(int x, int y, int max_x, int max_y)
{
	int	*tab[4][4];

	x = 0;
	while (x <= max_x)
	{
		y = 0;
		while (y <= max_y)
		{
			if ((tab[x][y] == tab[x][y + 1]) || (tab[x][y] == tab[x][y + 2])
			|| (tab[x][y] == tab[x][y + 3]) || (tab[x][y + 1] == tab[x][y + 2])
				|| (tab[x][y + 1] == tab[x][y + 3])
				|| (tab[x][y + 2] == tab[x][y + 3]))
				write (1, "Error\n", 6);
			return (1);
			if ((tab[x][y] == tab[x + 1][y]) || (tab[x][y] == tab[x + 2][y])
			|| (tab[x][y] == tab[x + 3][y]) || (tab[x + 1][y] == tab[x + 2][y])
				|| (tab[x + 1][y] == tab[x + 3][y])
				|| (tab[x + 2][y] == tab[x + 3][y]))
				write (1, "Error\n", 6);
			return (1);
		}	
		y++;
	}
	x++;
	return (0);
}

void	ft_fill_table(int x, int y)
{
	int	x_table;
	int	y_table;

	if (x <= 0 || y <= 0)
	{
		write (1, "Error\n", 6);
		return ;
	}
	y_table = 0;
	x_table = 0;
	while (++y_table <= y)
	{
		while (++x_table <= x)
		{
			ft_what_print0(x_table, y_table, x, y);
		}
		x_table = 0;
		write(1, "\n", 1);
	}
}
