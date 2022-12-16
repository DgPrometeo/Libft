/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:20:00 by danielga          #+#    #+#             */
/*   Updated: 2022/12/11 20:49:21 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	fin;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	fin = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (fin > i && ft_strrchr(set, s1[fin]))
		fin--;
	return (ft_substr(s1, i, fin - i + 1));
}

/*
Creamos la variable de contador y otra para contabilizar el final.
también creo una variable char para convertirla en la string recortada guardada.

primero verifico que tenga las dos, sino da nulo (con NULL).
contabilizo el final con strlen. 
creo un bucle en el que parará cuando encuentre, gracias a strchr, la diferencia.
despues,vuelvo a localizar la diferencia con strrchr al final.
Y devuelvo el malloc creado con substr con el string que tengo que tener el s1 
que se va a modificar, el start es donde se quedó i, terminando con el fin que 
es donde se ubica la diferencia, y el +1 para el nulo.
*/
