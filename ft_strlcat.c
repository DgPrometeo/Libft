/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:30:46 by danielga          #+#    #+#             */
/*   Updated: 2022/12/11 17:11:33 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//									STRLCAT

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*ps;

	ps = (char *)src;
	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	while (ps[j] != '\0' && (i + j + 1) < size)
	{
		dst[i + j] = ps[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (ft_strlen(ps) + i);
}
