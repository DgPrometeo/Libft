/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:02:38 by danielga          #+#    #+#             */
/*   Updated: 2022/12/22 17:48:25 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Creamos una variable nueva para la reserva de memoria. Esa reserva le decimos 
que su tamaño es de una t_list, y verificamos si se ha creado. Una vez creada
le indicamos lo que nos indican, el contenido de la lista es 'content' y el
siguiente es nulo. Finalmente devolvemos el nuevo nodo creado.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
