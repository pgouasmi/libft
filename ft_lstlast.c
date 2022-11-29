/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:54:55 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/29 18:07:00 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;
	int		i;
	
	temp = lst;
	i = 0;
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	while (lst && i-- > 1)
		lst = lst->next;
	return (lst);
}