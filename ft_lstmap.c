/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:41:59 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/16 19:03:37 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *lst2;
	t_list *element;
	void *result;
	
	if (!lst || !f || !del)
		return (NULL);
	lst2 = malloc(sizeof(t_list *));
	if (lst2 == NULL)
		return (0);
	while (lst->next)
	{
		result = f(lst->content);
		element = ft_lstnew(result);
		if (!element)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		element->content = result;
		ft_lstadd_back(&lst2, element);
		lst = lst->next;
	}
	return (lst2);
}