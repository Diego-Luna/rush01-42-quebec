/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <dluna-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:42:09 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/06 23:05:18 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
int		ft_str_is_numeric_and_space(char *str);
int		ft_game_possible(int table_reference[6][6]);
void	ft_atoi(char *str, int list_x[16]);
void	ft_table_rest(int table[4][4]);
void	ft_table_print(int table[6][6]);
void	ft_table_print4(int table[4][4]);
void	ft_run_login(int table[4][4],int table_reference[6][6]);
void	ft_table_constant(int table[4][4], int t_r[6][6]);
//void	ft_loop_impossibles(int table[5][4][4], int t_r[6][6]);

void	ft_create_table(int reference[6][6], int list_x[16])
{
	int	x;
	int	y;

	y = 0;
	while (y < 6)
	{
		x = 0;
		while (x < 6)
		{
			if (y == 0 && x >= 1 && x <= 4)
				reference[0][x] = list_x[x - 1];
			else if (y == 5 && x >= 1 && x <= 4)
				reference[5][x] = list_x[(x - 1) + 4];
			else if (y >= 1 && y <= 4 && x == 0)
				reference[y][0] = list_x[7 + y];
			else if (y >= 1 && y <= 4 && x == 5)
				reference[y][5] = list_x[11 + y];
			else
				reference[y][x] = 0;
			x++;
		}
		y++;
	}
}

int	main(int arg, char **str)
{
	int	table_reference[6][6];
	int	table[4][4];
	int	reference_list[16];

	if (arg == 2 && ft_strlen(str[1]) == 31
		&& ft_str_is_numeric_and_space(str[1]))
	{
		ft_atoi(str[1], reference_list);
		ft_create_table(table_reference, reference_list);
		//ft_table_print(table_reference);
		//write(1, "\n-------\n", 9);
		if (ft_game_possible(table_reference))
		{
			ft_table_rest(table);
			ft_table_constant(table, table_reference);
			//ft_table_print(table_reference);
			//ft_table_print4(table);
			//write(1, "\n-------\n", 9);
			ft_run_login(table, table_reference);

			ft_table_print4(table);
		}
		else
			write(1, "Error", 5);
	}
	else
		write(1, "Error", 5);
	return (0);
}
