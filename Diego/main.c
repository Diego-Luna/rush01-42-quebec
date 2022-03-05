/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:42:09 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/05 18:30:36 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
int	ft_str_is_numeric_and_space(char *str);
void	ft_atoi(char *str, int list_x[16]);
void	ft_table_print(int table[6][6], int size_x, int size_y);

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
	int	table_[4][4][4];
	int reference_list[16];

	if (arg == 2 && ft_strlen(str[1]) == 31
		&& ft_str_is_numeric_and_space(str[1]))
	{
		printf("Value str:%s\n", str[1]);
		ft_atoi(str[1], reference_list);
		ft_create_table(table_reference, reference_list);
		printf("Value table:%d\n", reference_list[0]);
		printf("Value table:%d\n", reference_list[1]);
		printf("Value table:%d\n", reference_list[2]);
		printf("Value table:%d\n", reference_list[3]);
		printf("Value table:%d\n", reference_list[4]);
		printf("Value table:%d\n", reference_list[5]);
		ft_table_print(table_reference, 6, 6);
	}
	return (0);
}
