/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:54:22 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/05 19:35:20 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_number(char str)
{
	if (str >= '0' && str <= '4')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric_and_space(char *str)
{
	int	index;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		index = 0;
		while (str[index] != '\0')
		{
			if (index == 0 && !(ft_number(str[index])))
				return (0);
			else if (str[index - 1] == ' ' && !(ft_number(str[index])))
				return (0);
			else if (str[index] == ' ' && !(ft_number(str[index - 1])))
				return (0);
			index++;
		}
		return (1);
	}
}

void	ft_atoi(char *str, int list_x[16])
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			list_x[ii] = str[i] - 48;
			ii++;
		}
		i++;
	}
}
