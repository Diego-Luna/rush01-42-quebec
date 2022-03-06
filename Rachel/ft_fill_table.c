/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raruiz-r <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:58:18 by raruiz-r          #+#    #+#             */
/*   Updated: 2022/03/05 20:05:38 by raruiz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_what_print(int tab[4][4])
{
	int y;
	int x;

	x = 0;
	while (x <= 4)
	{
		y = 0;
		while (y <= 4)
		{
			if ((tab[y][x] == tab[y][x + 1]) || (tab[y][x] == tab[y][x + 2])
			|| (tab[y][x] == tab[y][x + 3]) || (tab[y][x + 1] == tab[y][x + 2])
				|| (tab[y][x + 1] == tab[y][x + 3])
				|| (tab[y][x + 2] == tab[y][x + 3]))
				write (1, "Error\n", 6);
			return (1);
			if ((tab[y][x] == tab[y + 1][x]) || (tab[y][x] == tab[y + 2][x])
			|| (tab[y][x] == tab[y + 3][x]) || (tab[y + 1][x] == tab[y + 2][x])
				|| (tab[y + 1][x] == tab[y + 3][x])
				|| (tab[y + 2][x] == tab[y + 3][x]))
				write (1, "Error\n", 6);
			return (1);
		}	
		y++;
	}
	x++;
	return (0);
}

void	ft_fill_table(int table[4][4])
{
	int	x_table;
	int	y_table;

	y_table = 0;
	x_table = 0;
	while (++y_table <= 4)
	{
		while (++x_table <= 4)
		{
			ft_what_print(table[y_table][x_table]);
		}
		x_table = 0;
	}
}

int	main(void)
{
	int	tab[4][4] = {
		{4, 2, 3, 4}, 
		{1, 2, 4, 3}, 
		{3, 1, 2, 1}, 
		{2, 3, 1, 2}
	};
		
	ft_fill_table(tab);
}
