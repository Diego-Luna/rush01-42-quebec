/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:42:09 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/05 13:34:04 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
int	ft_str_is_numeric_and_space(char *str);

#define SIZE_RES 4

int	main(int arg, char **str)
{
	int	table_reference[SIZE_RES + 2][SIZE_RES + 2];
	int	table_result[SIZE_RES][SIZE_RES];

	if (arg == 2 && ft_strlen(str[1]) == 31
		&& ft_str_is_numeric_and_space(str[1]))
	{
		printf("Value str:%s\n", str[1]);
	}
	return (0);
}
