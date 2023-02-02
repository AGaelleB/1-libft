/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnefo <abonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:34:07 by abonnefo          #+#    #+#             */
/*   Updated: 2022/11/22 11:03:28 by abonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Ajoute l’élément ’new’ au début de la liste

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
