/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:34:31 by danielga          #+#    #+#             */
/*   Updated: 2022/12/19 14:05:48 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//		ITOA -  string to an integer.

static int	ft_numberlen(long n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		c++;
		n = -n;
		ft_numberlen(n);
	}
	if (n == 0)
	{
		c++;
		return (c);
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nmb;
	char	*str;

	nmb = (long)n;
	len = ft_numberlen(nmb);
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	if (nmb < 0)
	{
		str[0] = '-';
		nmb = -nmb;
	}
	if (nmb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nmb > 0)
	{
		str[len] = nmb % 10 + 48;
		nmb = nmb / 10;
		len--;
	}
	return (str);
}
