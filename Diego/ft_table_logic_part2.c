/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_table_logic_part2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 23:25:49 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/06 23:30:45 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_complete_number(int t[4][4], int number);
void	ft_number_1_4_v(int t[4][4], int x, int y);
void	ft_number_1_4_h(int t[4][4], int x, int y);

void	ft_check_4_more_if(int y, int x, int t_r[6][6], int t[4][4])
{
	if (y == 0 && x >= 1 && x <= 4 && t_r[y][x] == 4)
	{
		ft_number_1_4_v(t, x, y);
	}
	else if (y == 5 && x >= 1 && x <= 4 && t_r[y][x] == 4)
	{
		ft_number_1_4_v(t, x, y);
	}
	else if (y >= 1 && y <= 4 && x == 0 && t_r[y][x] == 4)
	{
		ft_number_1_4_h(t, x, y);
	}
	else if (y >= 1 && y <= 4 && x == 5 && t_r[y][x] == 4)
	{
		ft_number_1_4_h(t, x, y);
	}
}

void	ft_check_4(int t[4][4], int t_r[6][6])
{
	int	y;
	int	x;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			ft_check_4_more_if(y, x, t_r, t);
			x++;
		}
		y++;
	}
}

void	ft_run_login(int table[4][4], int table_reference[6][6])
{
	ft_check_4(table, table_reference);
	ft_complete_number(table, 4);
}
