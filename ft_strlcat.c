/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:48:14 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/08 18:21:35 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size - 1)
	{
		i++;
	}
	while (src[j] && i < size - 1)
	{
 		dst[i] = src[j];
 		i++;
 		j++;
	}
	dst[i] = 0;
		return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dest[] = "cou";
// 	char src[] = "hello";
// 	printf("%zu\n", ft_strlcat(dest, src, 8));
// 	printf("%s", dest);
// }

/* Note, however, that if strlcat() traverses size characters without finding a NUL, the length of
the string is considered to be size and the destination string will not be NUL-terminated (since
there was no space for the NUL).  This keeps strlcat() from running off the end of a string.  In
practice this should not happen (as it means that either size is incorrect or that dst is not a
proper “C” string).  The check exists to prevent potential security problems in incorrect code.
*/