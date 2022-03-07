/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_logic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:08:42 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/06 23:25:23 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_number_h(int t[4][4], int number, int x, int y)
{
	int	i;

	i = 0;
	while (i < 4)
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
	while (i < 4)
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
	int	x;
	int	y;

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

void	ft_number_1_4_v(int t[4][4], int x, int y)
{
	int	i;

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

void	ft_number_1_4_h(int t[4][4], int x, int y)
{
	int	i;

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
