/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:12:28 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/08 14:40:12 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return (((char *)str) + i);
		}
		else
			i--;
	}
	if (str[i] == '\0' && c == '\0')
		return (((char *)str + i));
	else
		return (NULL);
}

// int	main(void)
// {
// 	char str[15] = "Hello toi";
// 	int c = 'A';
// 	printf("%s\n", ft_strrchr(str, c));
// }