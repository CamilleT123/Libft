/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:30:05 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/08 17:25:32 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!ft_isalpha(c) || !ft_isdigit(c))
		return (0);
	else
		return (1);
}

// #include <stdio.h>
// int main(void)
// {
//   int c; 
//   c = '5';
//   printf("test2 : %d", ft_isalnum(c));
// }