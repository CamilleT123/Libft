/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:46:36 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/15 19:23:31 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void	*content;
	struct	s_list *next;
}			t_list;

t_list *ft_lstnew(void *content)
{
	t_list *element;
	
	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new; // pas compris ca
}

int ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return(lst); // pourquoi pas lst.content
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	
	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return;
	}
	temp = *lst;
	while (lst->next)
	{
		temp = 
		lst = lst->next;
	}
	lst->next = new
	new->next = NULL;
}