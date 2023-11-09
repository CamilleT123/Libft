/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:27:54 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/09 17:46:35 by ctruchot         ###   ########.fr       */
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
	l = 1;
	while (s[i])
	{
		if (s[i] == c)
			l++;
		i++;
	}
	return (l);
}

size_t	ft_getwordsize(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

char	*ft_getword(char const *s, size_t wordsize)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * wordsize + 1);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s, wordsize + 1);
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		sizetab;
	size_t		lines;
	size_t		wordsize;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	lines = ft_lines(s, c);
	sizetab = ft_strlen(s) + 2;
	tab = malloc(sizeof(char) * sizetab + 1);
	if (!tab)
		return (NULL);
	while (s[i] && j < lines)
	{
		if (s[i] == c)
			i++;
		wordsize = ft_getwordsize(&s[i], c);
		tab[j] = ft_getword(&s[i], wordsize);
		tab[j][wordsize] = '\0'; // AUTOMATIQUE??
		printf("j = %zu\n i = %zu\n", j, i);
		printf("Tab :%s\n", tab[j]);
		j++;
		i = i + wordsize;
	}
	tab[j] = NULL;
	printf("Tab :%s\n", tab[j]);
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
// 	char	*str = "salut ca va";
// 	ft_split(str, ' ');
// }