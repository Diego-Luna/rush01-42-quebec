/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raruiz-r <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:10:43 by raruiz-r          #+#    #+#             */
/*   Updated: 2022/03/06 16:56:18 by raruiz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_what_print_y_first(int tab[4][4])
{
	int	y;
	int	x;

	x = 0;
	while (x <= 4)
	{
		y = 0;
		while (y <= 4)
		{
			if ((tab[0][0] == tab[0][1]) || (tab[0][0] == tab[0][2])
				|| (tab[0][0] == tab[0][3]) || (tab[0][1] == tab[0][2])
				|| (tab[0][1] == tab[0][3]) || (tab[0][2] == tab[0][3])
				|| (tab[1][0] == tab[1][1]) || (tab[1][0] == tab[1][2])
				|| (tab[1][0] == tab[0][3]) || (tab[1][1] == tab[1][2])
				|| (tab[1][1] == tab[1][3]) || (tab[1][2] == tab[1][3])
				|| (tab[2][0] == tab[2][1]) || (tab[2][0] == tab[2][2])
				|| (tab[2][0] == tab[2][3]) || (tab[2][1] == tab[2][2])
				|| (tab[2][1] == tab[2][3]) || (tab[2][2] == tab[2][3])
				|| (tab[3][0] == tab[3][1]) || (tab[3][0] == tab[3][2])
				|| (tab[3][0] == tab[3][3]) || (tab[3][1] == tab[3][2])
				|| (tab[3][1] == tab[3][3]) || (tab[3][2] == tab[3][3]))
				write (1, "cafat\n", 6);
				return (1);
		}	
		y++;
	}
	x++;
	return (0);
}

int ft_what_print_x_first(int tab[4][4])
{
     int y;
     int x;

     x = 0;
     while (x <= 4)
     {
         y = 0;
         while (y <= 4)
         {
			if ((tab[0][0] == tab[1][0]) || (tab[0][0] == tab[2][0])
				|| (tab[0][0] == tab[3][0]) || (tab[1][0] == tab[2][0])
				|| (tab[1][0] == tab[3][0]) || (tab[2][0] == tab[3][0])
				|| (tab[0][1] == tab[1][1]) || (tab[0][1] == tab[2][1])
				|| (tab[0][1] == tab[3][1]) || (tab[1][1] == tab[2][1])
				|| (tab[1][1] == tab[3][1]) || (tab[2][1] == tab[3][1])
				|| (tab[0][2] == tab[1][2]) || (tab[0][2] == tab[2][2])
				|| (tab[0][2] == tab[3][2]) || (tab[1][2] == tab[2][2])
				|| (tab[1][2] == tab[3][2]) || (tab[2][2] == tab[3][2])
				|| (tab[0][3] == tab[1][3]) || (tab[0][3] == tab[2][3])
				|| (tab[0][3] == tab[3][3]) || (tab[1][3] == tab[2][3])
				|| (tab[1][3] == tab[3][3]) || (tab[2][3] == tab[3][3]))
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
			ft_what_print_y_first(table);
//			break;
			ft_what_print_x_first(table);
		}
//		x_table = 0;
	}
}

int	main(void)
{
	int	tab[4][4] = {
		{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 2, 4}
	};

	ft_fill_table(tab);
}


