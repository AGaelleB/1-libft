/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnefo <abonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:35:27 by abonnefo          #+#    #+#             */
/*   Updated: 2022/11/24 13:30:04 by abonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Libère la mémoire de l’élément passé en argument en
utilisant la fonction ’del’ puis avec free(3). La
mémoire de ’next’ ne doit pas être free.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*elem;

	if (lst == 0 || del == 0)
		return ;
	elem = lst -> content;
	del (elem);
	free(lst);
}
