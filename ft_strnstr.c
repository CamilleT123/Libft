/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:48:26 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/22 12:18:21 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
			if (little[j] == 0)
				return (&((char *)big)[i - j]);
			if (big[i] != little[j])
				i = i - j;
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
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";

// 	// char *big = "abcdef";
// 	// char *little = "abcdefghijklmnop";
// 	// size_t	max = strlen(big);

// 	printf("%s\n", ft_strnstr(haystack, needle, 0));
// 	printf("%s\n", strnstr(haystack, needle, 0));
// }