/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_logic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:08:42 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/06 21:12:24 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_number_1_4_v(int t[4][4],int x, int y)
{
	int i;

	i = 1;
	if (y == 0)
	{
		while (y < 4)
		{
			t[y][x - 1] = i;
			y++;
			i++;
		}
	}
	else
	{
		while (i < 5)
		{
			t[y - 2][x - 1] = i;
			y--;
			i++;
		}
	}
		
}
void	ft_number_1_4_h(int t[4][4],int x, int y)
{
	int i;

	i = 1;
	if (x == 0)
	{
		while (x < 4)
		{
			t[y - 1][x] = i;
			x++;
			i++;
		}
	}
	else
	{
		while (i < 5)
		{
			printf("-> valor de x: %d, y: %d\n", x, y);
			t[y - 1][x - 2] = i;
			x--;
			i++;
		}
	}
}

void	ft_check_4(int t[4][4],int t_r[6][6])
{
	int y;
	int x;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			if (y == 0 && x >= 1 && x <= 4 && t_r[y][x] == 4) // primera fila
			{
				printf("> if 1 Valor de x: %d, y: %d, t_r[y][x]: %d\n", x, y, t_r[y][x]);
				ft_number_1_4_v(t, x, y);
			}
			else if (y == 5 && x >= 1 && x <= 4 && t_r[y][x] == 4) // ultima fila
			{
				printf("> if 2 Valor de x: %d, y: %d, t_r[y][x]: %d\n", x, y, t_r[y][x]);
				ft_number_1_4_v(t, x, y);
			}
			else if (y >= 1 && y <= 4 && x == 0 && t_r[y][x] == 4) // primera fila izquierda
			{
				printf("> if 3 Valor de x: %d, y: %d, t_r[[y][x]: %d\n", x, y, t_r[y][x]);
				ft_number_1_4_h(t, x, y);
			}
			else if (y >= 1 && y <= 4 && x == 5 && t_r[y][x] == 4) // primera fila derecha
			{
				printf("> if 4 Valor de x: %d, y: %d, t_r[[y][x]: %d\n", x, y, t_r[y][x]);
				ft_number_1_4_h(t, x, y);
			}
			x++;
		}
		y++;
	}
}

void	ft_run_login(int table[4][4],int table_reference[6][6])
{
	ft_check_4(table, table_reference);	
}