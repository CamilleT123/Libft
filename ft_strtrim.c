/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:37:45 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/13 12:52:28 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_indexstart(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		if (s1[i] != set[j])
			j++;
	}
	return (i);
}

int	ft_indexend(char const *s1, char const *set)
{
	int	j;
	int	l;

	j = 0;
	l = ft_strlen(s1) - 1;
	while (set[j])
	{
		if (s1[l] == set[j])
		{
			l--;
			j = 0;
		}
		if (s1[l] != set[j])
			j++;
	}
	return (l);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		start;
	int		k;
	int		end;
	int		size;

	s2 = NULL;
	start = ft_indexstart(s1, set);
	end = ft_indexend(s1, set) + 1;
	if (start > end)
		return (ft_strdup("\0"));
	k = 0;
	size = end - start + 1;
	s2 = malloc(sizeof(char) * size);
	if (!s2)
		return (NULL);
	ft_bzero(s2, size);
	while (s1[start] && start < end)
	{
		s2[k] = s1[start];
		start++;
		k++;
	}
	return (s2);
}

// int main(void)
// {
// 	printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
// }