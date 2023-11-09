/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:47:42 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/09 17:55:09 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size > 0)
	{
		while (src[j] && j < size - 1)
		{
			dst[j] = src[j];
			j++;
		}
		if (j == size - 1)
			dst[j] = '\0';
	}
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dest[] = "cou";
// 	char src[] = "hello hgsdfh";
// 	printf("%zu\n", ft_strlcpy(dest, src, 8));
// 	printf("%s", dest);
// }