/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:09:25 by danielga          #+#    #+#             */
/*   Updated: 2022/12/10 18:46:30 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//				ATOI - Locate and convert a string to an integer.

/*Function that will continue until there are no escape paths.*/
static int	ft_space(char a)
{
	if (a == ' ' || a == '\f' || a == '\r')
		return (1);
	else if (a == '\n' || a == '\t' || a == '\v')
		return (1);
	return (0);
}

/*
We create another function for the symbols, if it finds them, it will give 1.
After, we do the if in the while that if any is negative it will give the "-"
*/
static int	ft_symbol(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

/*
Create 3 variables for the string counter, the integer and the symbol.
We go through spaces, symbols and finally locate the numbers by converting
them to int. Finally, we multiply it by the symbol
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	nmb;
	int	symbol;

	i = 0;
	nmb = 0;
	symbol = 1;
	if (str[i] == '\0')
		return (0);
	while (ft_space(str[i]) != 0)
		i++;
	if (str[i + 1] == '+' || str[i + 1] == '-')
		return (0);
	while (ft_symbol(str[i]) != 0)
	{
		if (str[i] == '-')
			symbol = -symbol;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nmb = nmb * 10 + (str[i] - '0');
		i++;
	}
	return (symbol * nmb);
}
