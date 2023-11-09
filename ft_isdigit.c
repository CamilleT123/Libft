/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:29:22 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/06 18:31:47 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (0);
	else
		return (1);
}

// #include <stdio.h>
// int main(void)
// {
//     int c;
//     c = '1';
//     printf("test2 : %d", ft_isdigit(c));
// }