/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:04:49 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/13 17:50:53 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	r;
	int	rneg;
	int	i;

	r = 0;
	i = 0;
	rneg = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			rneg = rneg * -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		r = r * 10 + nptr[i] - 48;
		i++;
	}
	if (rneg == -1)
		r = r * -1;
	return (r);
}

// int	main(void)
// {
// 	char nptr[] = "+-59";
// 	printf("%d\n", ft_atoi(nptr));
// }
