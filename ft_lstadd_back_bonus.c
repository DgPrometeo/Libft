/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:06:52 by danielga          #+#    #+#             */
/*   Updated: 2022/12/22 17:39:09 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Creamos una variable para no modificar lst que se encuentra en el inicio.
Primero, verificamos si en la posición de lst existe algo, si no existiera,
ahí es donde deberíamos de añadir el 'new' y terminar la función vacía.
Si no es el caso, ejecutamos la función ft_lstlast para movernos a la última
posición, y en la siguiente añadimos 'new'.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}
