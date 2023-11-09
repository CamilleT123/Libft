/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:17:38 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/06 18:31:42 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (0);
	else
		return (1);
}

/*#include <stdio.h>
int    main(void)
{
    int c; 
    c = 143;
    printf("test %d", ft_isascii(c));
}*/