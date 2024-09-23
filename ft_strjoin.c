/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:26:50 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/22 10:09:24 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;
	size_t	mem;

	if (!s1 || !s2)
		return (NULL);
	mem = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = malloc(sizeof(char) * mem);
	if (!s3)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = 0;
	return (s3);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s1 = NULL;
// 	char	s2[] = "dolor sit amet";
// 	// s2[0] = '\0';
// 	printf("%s\n", ft_strjoin(s1, s2));
// }
