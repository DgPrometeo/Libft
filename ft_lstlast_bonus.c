/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:45:21 by danielga          #+#    #+#             */
/*   Updated: 2022/12/22 17:46:45 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Creamos una variable para recorrer lst sin tener que modificar lst, y metemos
un bucle en el que irá comprobando si el siguiente es nulo, para devolver esa
posición, o sino seguirá sumando posiciones hasta llegar al final donde devuelve
la última posición.
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	aux = lst;
	while (aux)
	{
		if (aux->next == NULL)
			return (aux);
		aux = aux->next;
	}
	return (aux);
}