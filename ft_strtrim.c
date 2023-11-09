/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:37:45 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/09 12:09:58 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_indexstart(char const *s1, char const *set)
{
	int i;
	int j;
	
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
	int j;
	int l;

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

char *ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int i;
	int k;
	int l;
	int size;

	i = ft_indexstart(s1, set);
	l = ft_indexend(s1, set);
	k = 0;
	size = ft_indexend(s1, set) - ft_indexstart(s1, set);
	s2 = malloc(sizeof(char) * size);
	if (!s2)
		return (NULL);
	while (s1[i] && i <= l)
	{
		s2[k] = s1[i];
		i++;
		k++;
	}
	return (s2);
}

int main(void)
{
	char s1[] = "     xcc xxh xxc    x";
	char set[] = " x";
	
	printf("%s\n", ft_strtrim(s1, set));
}