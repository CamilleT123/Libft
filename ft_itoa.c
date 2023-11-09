/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:13:50 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/09 17:49:27 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_getlengh(int n)
{
	int	l;

	l = 1;
	if (n < 0)
	{
		l = 2;
		n = n * -1;
	}
	while (n >= 9)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa_neg(int n, char *res, int l)
{
	n = n * -1;
	res[l + 1] = '\0';
	while (n > 9)
	{
		res[l - 1] = n % 10 + 48;
		n = n / 10;
		l--;
	}
	if (n <= 9)
		res[1] = n % 10 + 48;
	res[0] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		l;

	l = ft_getlengh(n);
	printf("lengh%d\n", l);
	res = malloc(sizeof(char) * l);
	if (n >= 0)
	{
		if (!res)
			return (NULL);
		res[l] = '\0';
		while (n > 9)
		{
			res[l - 1] = n % 10 + 48;
			n = n / 10;
			l--;
		}
		if (n <= 9)
		{
			res[0] = n % 10 + 48;
		}
	}
	if (n < 0)
		res = ft_itoa_neg(n, res, l);
	return (res);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-4559413));
}
