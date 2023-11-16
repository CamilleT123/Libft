/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:27:54 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/16 20:58:27 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
//freeee

size_t	ft_lines(char const *s, char c)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (s[i] == 0)
		return (0);
	while (s[i])
	{
		if ((s[i] != c) && ((s[i + 1] == c) || (s[i + 1] == 0)))
			l++;
		i++;
	}
	return (l);
}

size_t	ft_getwordsize(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*ft_getword(char const *s, size_t wordsize)
{
	char	*dest;

	dest = NULL;
	dest = malloc(sizeof(char) * (wordsize + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s, wordsize + 1);
	return (dest);
}

char	**ft_tab(char const *s, char **tab, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i] && j < ft_lines(s, c))
	{
		while (s[i] == c)
			i++;
		tab[j] = ft_getword(&s[i], ft_getwordsize(&s[i], c));
		if (!tab[j])
		{
			while ((int)j >= 0)
			{
				free(tab[j]);
				j--;
			}
			free(tab);
			return (NULL);
		}
		while ((s[i] != c) && s[i])
			i++;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_lines(s, c) + 1));
	if (!tab)
		return (NULL);
	ft_tab(s, tab, c);
	return (tab);
}

// int	main(void)
// {
// 	int i = 0;
// 	char s[] = "salut ca va";
// 	char	c = ' ';
// 	size_t lines = ft_lines(s, c);
// 	printf("%zu\n", lines);
// 	size_t sizetab = ft_strlen(s) + 2;
// 	printf("%zu\n", sizetab);
// 	size_t wordsize = ft_getwordsize(&s[i], c);
// 	printf("%zu\n", wordsize);
// 	char *tab = ft_getword(&s[i], wordsize);
// 	printf("%s\n", tab);
// }

// #include <stdio.h>
// int	main(void)
// {
// 	ft_split("  tripouille  42  ", ' ');
// }