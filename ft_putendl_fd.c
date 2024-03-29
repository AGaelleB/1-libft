/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnefo <abonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:11:21 by abonnefo          #+#    #+#             */
/*   Updated: 2022/11/25 09:47:41 by abonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Écrit La chaîne de caractères ’s’ sur le 
descripteur de fichier donné suivie d’un retour à la ligne.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
