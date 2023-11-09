/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:23:12 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/08 14:41:11 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int	main (void)
// {
// 	char *s1;
// 	char *s2;

// 	s1 = "AB";
// 	s2 = "ABCD";
// 	printf("%d\n", ft_strncmp(s1, s2, 3));
// 	printf("%d", strncmp(s1, s2, 3));
// 	return (0);
// } 
