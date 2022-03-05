/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raruiz-r <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:45:59 by raruiz-r          #+#    #+#             */
/*   Updated: 2022/03/05 16:09:25 by raruiz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>
#define SIZE_RES 4

void	ft_put_table(int x, int y);

void	ft_table_zero(int x, int y)
{
	int	*table_result[SIZE_RES][SIZE_RES];

	table_result[x][y] = malloc(SIZE_RES * SIZE_RES * sizeof(int));
	x = 0;
	while (x < SIZE_RES)
	{
		y = 0;
		while (y < SIZE_RES)
		{
			y++;
		}
		x++;
	}	
	ft_put_table(x, y);
	free(table_result[x][y]);
}

void	ft_put_table(int x, int y)
{
	int	x_table;
	int	y_table;
	int	z;

	z = 42;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	y_table = 0;
	x_table = 0;
	while (++y_table <= y)
	{
		while (++x_table <= x)
		{
			write (1, &z, 1);
		}
		x_table = 0;
		write (1, "\n", 1);
	}
}

int	main(void)
{
	int	x;
	int	y;

	x = 4;
	y = 4;
	ft_table_zero(x, y);
}
