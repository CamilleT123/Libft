/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:26:50 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/13 17:55:48 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// size_t ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;
	int		mem;

	mem = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = calloc(mem, 1);
	if (!s3)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	return (s3);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strjoin("", "42"));
// }