/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:50 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/09 12:27:29 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	s2 = malloc(sizeof(char) * len);
	if (!s2)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	return (s2);
}

// int	main(void)
// {
// 	char s[] = "coucou toi";

// 	printf("%s", ft_substr(s, 5, 3));
// }