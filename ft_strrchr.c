/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:56:44 by danielga          #+#    #+#             */
/*   Updated: 2022/12/11 17:11:47 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//									STRRCHR

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)s;
	x = (char) c;
	while (i >= 0)
	{	
		if (str[i] == x)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
