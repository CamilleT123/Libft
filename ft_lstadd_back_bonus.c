/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:18:58 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/20 10:18:47 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if ((*lst) == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

// int main(void)
// {
// 	t_list * lst =  NULL; t_list * new =  NULL;
// 	ft_lstadd_back(&lst, new);
// }