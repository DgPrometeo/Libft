/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:05:09 by danielga          #+#    #+#             */
/*   Updated: 2022/12/22 18:19:05 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Creamos una variable auxiliar para que sea el puntero de lst. Creamos un bucle
que recorra toda la lista y en ella indicamos que el aux es el siguiente que esté
en la lista y llamamos a la función 'ft_lstdelone' para borrar y liberar. Y
le indicamos que al puntero de lst es el nuevo aux vacío.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = aux;
	}
}
