/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:26:10 by danielga          #+#    #+#             */
/*   Updated: 2022/12/22 17:53:48 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Creamos dos variables: una como contador y otra que sustituye a 'lst' para no
modificarlo. El contador está a 0, e introducimos en un bucle a nuestro ´lst´
nuevo hasta que llegue a nulo. Dentro, irá desplazándose a lo largo de la lista
y sumando el contador. Al salir, devuelve simplemente el contador.
*/

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*aux;

	size = 0;
	aux = lst;
	while (aux != NULL)
	{
		size++;
		aux = aux->next;
	}
	return (size);
}
