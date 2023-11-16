/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:25:53 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/16 18:52:52 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	
	if (!lst || !del || !(*lst))
		return;
	while (*lst)
	{
		del((*lst)->content);
		tmp = (*lst);
		(*lst) = (*lst)->next;
		free((tmp));
	}
	*lst = NULL; 
}
