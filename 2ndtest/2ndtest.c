/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2ndtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raruiz-r <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:08:40 by raruiz-r          #+#    #+#             */
/*   Updated: 2022/03/06 16:33:09 by raruiz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
	
int ft_what_print(int tab[4][4])
{
     int y;
     int x;

     x = 0;
     while (x <= 4)
     {
         y = 0;
         while (y <= 4)
         {
			if (tab[0][x] == tab[0][y]) 
			{
				write (1, "Error\n", 6);
		 		return (1);
			 } 
			 y++;
		 }
   	 	 x++;
	}		 
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
			ft_what_print(table);
		}
		x_table = 0;
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
