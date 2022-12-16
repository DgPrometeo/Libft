/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:42:34 by danielga          #+#    #+#             */
/*   Updated: 2022/12/11 17:03:59 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//									MEMCPY

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*c;
	char	*d;

	i = 0;
	c = (char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (0);
	while (n > 0)
	{
		d[i] = c[i];
		i++;
		n--;
	}
	return (dst);
}
