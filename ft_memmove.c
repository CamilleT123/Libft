/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:45:40 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/09 17:52:11 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return ((char *)dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (src > dest)
	{
		ft_memcpy(dest, src, n);
	}
	if (src < dest)
	{
		while (i > 0)
		{
			printf("i = %zu\n", i);
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	return ((char *)dest);
}

// int main(void)
// {
// 	char	str[100] = "C'est pas joli";

// 	ft_memmove(str + 6, str, 25);
// 	printf("str = %s\n", str);
// }
