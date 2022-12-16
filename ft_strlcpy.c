/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:15:22 by danielga          #+#    #+#             */
/*   Updated: 2022/12/11 17:11:37 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//									STRLCPY

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	aux;
	char	*ps;

	ps = (char *)src;
	aux = ft_strlen(src);
	if (dstsize == 0)
		return (aux);
	else
	{
		i = 0;
		while (ps[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = ps[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (aux);
}
