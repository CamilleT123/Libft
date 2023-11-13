/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:12:28 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/13 15:57:03 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	if (c == 0)
		return (((char *)str + ft_strlen(str)));
	while (c > 255)
		c = c - 256;
	while (i >= 0 && str[i])
	{
		if (str[i] == c)
			return (((char *)str + i));
		else
			i--;
	}
	if (str[i] == 0 && c == 0)
		return (((char *)str));
	return (NULL);
}

// int	main(void)
// {
// 	// char str[15] = "Hello toi";
// 	char s[] = "tripouille";

// 	int c = 0;
// 	printf("%s\n", ft_strrchr(s, c));
// }