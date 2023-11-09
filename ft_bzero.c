/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:42:35 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/08 17:30:50 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	ft_memset(s, 0, size);
}

// int main(void)
// {
//     char s[50] = "je suis fatiguee";
//  	ft_bzero(s, 6);
//     printf("%s\n", s);
// }