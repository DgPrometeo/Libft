/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:08:17 by danielga          #+#    #+#             */
/*   Updated: 2022/12/11 17:12:02 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//									STRCHR

char	*ft_strchr(const char *s, int c)
{
	char	x;
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	x = (char) c;
	while (s[i] != x)
	{	
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (&str[i]);
}
