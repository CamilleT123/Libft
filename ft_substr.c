/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:50 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/21 11:39:03 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (len > (i - start))
		len = i - start;
	if (start > i)
		return (ft_strdup("\0"));
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	ft_bzero(s2, (len + 1));
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