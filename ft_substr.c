/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:09:25 by danielga          #+#    #+#             */
/*   Updated: 2022/12/10 20:49:12 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//								SUBSTR

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}

/*
En primer lugar revisamos si tenemos string. Si no hay s, es nulo.

Después, tenemos que revisar si el tamaño del string es inferior a la
ubicación del start. Si es así, debemos de crear una memoria pero vacía, ya que
no podemos añadir ningún elemento del string.

Si (el tamaño del string - la posición del start) es "<" la longitud máxima
del substring, tenemos que modificar el len para que pueda abarcar esa 
información y no sea de mayor tamaño y añada más elementos de los necesarios.


Una vez establecidas esas posibilidades, creamos el malloc con la dimension del 
len +1 para ocupar lo necesario más el nulo. Revisamos que se haya creado y 
usamos el memcpy para copiar en la memoria el string en la posición del start 
hasta el len. Devolviendo finalmente la memoria.

teorías:
Si len < start ¿debería de dejar la memoria sin el string? 
Si start == 0 ¿debería de empezar desde la primera posición?
Si la dimensión del string < start  ¿debería dar una memoria vacia?
*/