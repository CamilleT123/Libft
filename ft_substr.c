/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:50 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/13 18:56:29 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	j;
	size_t	mem;

	i = 0;
	mem = len + 1;
	while (s[i])
		i++;
	if (len > (i - start))
		mem = i - start + 1;
	if (start > i)
		return (ft_strdup("\0"));
	s2 = malloc(sizeof(char) * mem);
	if (!s2)
		return (NULL);
	ft_bzero(s2, mem);
	j = 0;
	while (s[start] && j < len)
	{
		s2[j] = s[start];
		j++;
		start++;
	}
	return (s2);
}

// int	main(void)
// {
// 	printf("%s", ft_substr("tripouille", 0, 42000));
// }