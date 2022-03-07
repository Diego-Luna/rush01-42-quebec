/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_logic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:08:42 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/06 23:05:53 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void ft_if_1_3_3(int *find, int value_check)
{
	if (find == 0)
	{
		if (value_check == 1)
		{
			find = 1;
			i = 0;
		}
	}
	if (find == 1)
	{
		if (value_check == 3)
		{
				find = 2;
		}
	}
	if (find == 2)
	{		
		if (value_check == 3)
		{
			find = 3;
		}
	}
}

int	ft_1_3_3_v(int t_r[6][6], int x)
{
	int i;

	int find = 0;
	i = 1;
	while (i < 5)
	{
		ft_if_1_3_3(&find, t_r[i][x])
		i++;
	}

	if (find == 3)
	{
		return (1);
	}
	else (0);
}

int	ft_1_3_3_h(int t_r[6][6], int y)
{
	int i;

	int find = 0;
	i = 1;
	while (i < 5)
	{
		ft_if_1_3_3(&find, t_r[y][i])
		i++;
	}

	if (find == 3)
	{
		return (1);
	}
	else (0);
}

int ft_check_1_3_3(int t_r[6][6], int results[4])
{
	int	x;
	int	y;
	y = 0;
	
	if (ft_1_3_3_h(t_r, 0))
		results[0] = 1;
	if (ft_1_3_3_v(t_r, 0))
		results[1] = 2;
	if (ft_1_3_3_v(t_r, 5))
		results[2] = 3;
	if (ft_1_3_3_h(t_r, 5))
		results[3] = 4;
}

int	ft_index_number_not_013_h(int t_r[6][6], int y)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (t_r[y][i] == 2)
		{
			return i;
		}
		i++;
	}
}

int	ft_index_number_not_013_v(int t_r[6][6], int x)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (t_r[i][x] == 2)
		{
			return i;
		}
		i++;
	}
}

void ft_change_value_3(int t_r[6][6], int table[4][4], int orientation)
{
	int index;

	if (orientation == 1)
	{
		index = ft_index_number_not_013_h();
	}
}

void ft_reference_1_3_3(int t_r[6][6])
{
	int	results[4];
	int	i;
	ft_check_1_3_3(t_r, results);
	while (i < 4)
	{
		if (results[i] != 0)
			ft_change_value_3(t_r, table, orientation);
	}
}
*/
int	ft_number_h(int t[4][4], int number, int x, int y)
{
	int	i;

	i = 0;
	while(i < 4)
	{
		if (number == t[y][i] && i != x)
		{
			return (0);
		}
		i++;
	}

	return (1);
} 

int	ft_number_v(int t[4][4], int number, int x, int y)
{
	int	i;

	i = 0;
	while(i < 4)
	{
		if (number == t[i][x] && y != x)
		{
			return (0);
		}
		i++;
	}

	return (1);
} 

void	ft_complete_number(int t[4][4], int number)
{
	int x;
	int y;

	y = 0;
	while (y < 4)
	{	
		x = 0;
		while (x < 4)
		{
			if (ft_number_h(t, number, x, y) && ft_number_v(t, number, x, y))
			{
				t[y][x] = number;
			}
		x++;
		}
	y++;
	}
}

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
				ft_number_1_4_v(t, x, y);
			}
			else if (y == 5 && x >= 1 && x <= 4 && t_r[y][x] == 4) // ultima fila
			{
				ft_number_1_4_v(t, x, y);
			}
			else if (y >= 1 && y <= 4 && x == 0 && t_r[y][x] == 4) // primera fila izquierda
			{
				ft_number_1_4_h(t, x, y);
			}
			else if (y >= 1 && y <= 4 && x == 5 && t_r[y][x] == 4) // primera fila derecha
			{
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
	ft_complete_number(table, 4);
}