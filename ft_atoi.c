/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:04:49 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/08 17:14:43 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int r;
	int i;
	
	r = 0;
	i = 0;
	if (nptr[i] >= 48 && nptr[i] <= 57)
	{
		while (nptr[i])
		{
			r = r * 10 + nptr[i] - 48;
			i++;
		}
		return (r);
	}
	else 
		return (0);
}

int	main(void)
{
	char nptr[] = "59";
	printf("%d\n", ft_atoi(nptr));
}
