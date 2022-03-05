/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:54:22 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/05 13:34:02 by dluna-lo         ###   ########.fr       */
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
	if (str >= '1' && str <= '4')
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
