/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:48:14 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/10 17:57:39 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sizeneg(char *dst, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = size;
	if (size == 0)
		return (ft_strlen(src));
	if (size >= ft_strlen(dst))
		len = ft_strlen(dst);
	if (size < 0)
		ft_sizeneg(dst, src);
	else
		while (dst[i] && i < size)
			i++;
		while (src[j] && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		if (size > ft_strlen(dst))
			dst[i] = 0;
	return (len + ft_strlen(src));
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dest[30]; ft_memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
// 	printf("return=%zu\n", ft_strlcat(dest, src, 1));
// 	printf("dest=%s", dest);
// }
