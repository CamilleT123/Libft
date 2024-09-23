/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:13:50 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/21 11:25:11 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlengh(int n)
{
	int	l;

	l = 1;
	if (n < 0)
	{
		l = 2;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

static char	*ft_itoa_neg(int n, char *res, int l)
{
	n = n * -1;
	res[0] = '-';
	res[l] = '\0';
	while (l > 1)
	{
		l--;
		res[l] = n % 10 + 48;
		n = n / 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		l;

	if ((long int)n == -2147483648)
		return (ft_strdup("-2147483648"));
	l = ft_getlengh(n);
	res = malloc(sizeof(char) * (l + 1));
	if (!res)
		return (NULL);
	if (n >= 0)
	{
		res[l] = '\0';
		while (l > 0)
		{
			l--;
			res[l] = n % 10 + 48;
			n = n / 10;
		}
	}
	if (n < 0)
		res = ft_itoa_neg(n, res, l);
	return (res);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(INT_MIN));
// }
