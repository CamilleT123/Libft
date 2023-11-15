/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:48:26 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/15 14:46:35 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
// #include <float.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!len && !big)
		return (0);
	if (ft_strlen(big) < ft_strlen(little))
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == 0 || j == len)
				return (&((char *)big)[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>
// int 	main(void)
// {
// 	// char str[] = "totototoi";
// 	// char to_find[] = "toto";
// 	// char haystack[30] = "aaabcabcd";
// 	// char needle[10] = "aabc";

// 	char *big = "abcdef";
// 	char *little = "abcdefghijklmnop";
// 	size_t	max = strlen(big);

// 	printf("%s\n", ft_strnstr(big, little, max));
// 	printf("%s\n", strnstr(big, little, max));
// }