/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:23:12 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/14 13:29:27 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int	main (void)
// {
// 	// char *s1;
// 	// char *s2;

// 	// s1 = "AB";
// 	// s2 = "ABCD";
// 	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
// 	printf("%d", strncmp("test\200", "test\0", 6));
// 	return (0);
// }
