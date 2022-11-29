/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:53:40 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/29 18:14:33 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstadd_back(t_list **lst, t_list *new)
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