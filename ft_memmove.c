/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:45:05 by danielga          #+#    #+#             */
/*   Updated: 2022/12/11 17:10:59 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//									MEMMOVE

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str;
	char	*ps;

	i = 0;
	str = (char *)dst;
	ps = (char *)src;
	if (!dst && !src)
		return (0);
	if (str > ps)
	{
		while (len-- > 0)
		{
			str[len] = ps[len];
		}
	}
	else
	{
		while (i < len)
		{
			str[i] = ps[i];
			i++;
		}
	}
	return (dst);
}
