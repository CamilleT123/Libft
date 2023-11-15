/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:48:14 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/15 15:40:25 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sizedst;
	size_t	sizesrc;

	i = 0;
	if (!size && !src)
		return (0);
	if (!size && (!dst || dst[0] == 0))
		return (ft_strlen(src));
	else
	{
		sizedst = ft_strlen(dst);
		sizesrc = ft_strlen(src);
		if (sizedst > size)
			return (sizesrc + size);
		while ((sizedst + i < size - 1) && src[i])
		{
			dst[sizedst + i] = src[i];
			i++;
		}
		dst[sizedst + i] = 0;
		return (sizedst + sizesrc);
	}
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	// char dest[15];
// 	// ft_memset(dest, 0, 15);
// 	// ft_memset(dest, 'r', 6);
// 	// dest[11] = 'a';

// 	char dest[30]; ft_memset(dest, 0, 30);
// 	// char * src = (char *)"AAAAAAAAA";
// 	ft_memset(dest, 0, 30);

// 	// char dest[] = "BB";
// 	// char *src = NULL;
// 	// printf("return=%zu\n", ft_strlcat(dest, src, 15));
// 	// printf("dest=%s", dest);
// 	// printf("return=%zu\n", ft_strlcat(dest, src, 1));
// 	// printf("dest=%s", dest);
// 	printf("dest=%s\n", dest);
// 	printf("return=%zu\n", ft_strlcat(dest, "123", 0));
// 	printf("dest=%s", dest);
// }
