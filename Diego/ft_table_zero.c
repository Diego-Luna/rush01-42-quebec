/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raruiz-r <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:45:59 by raruiz-r          #+#    #+#             */
/*   Updated: 2022/03/05 22:38:59 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>


void	ft_table_rest(int table[5][4][4])
{
	int	z;
	int x;
	int y;

	z = 0;
	while (z < 5 )
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
