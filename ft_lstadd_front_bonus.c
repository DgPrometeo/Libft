/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielga <danielga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:50:01 by danielga          #+#    #+#             */
/*   Updated: 2022/12/22 17:44:03 by danielga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Simplemente, he indicado que el siguiente de 'new' es el puntero de 'lst' ya que
este apunta a la primera posición de la lista para que se coloce después de 'new'
y finalmente, lst que marca la primera posición, será ahora new.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
