/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:26:50 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/08 18:40:03 by ctruchot         ###   ########.fr       */
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

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int i;
	int j;
	
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
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
	s3[i] = 0;
		return (s3);
}

// int	main(void)
// {
// 	char s1[] = "coucou";
// 	char s2[] = " toi";
	
// 	printf("%s\n", ft_strjoin(s1, s2));
// }