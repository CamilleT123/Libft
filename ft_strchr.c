/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:02:18 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/10 15:13:19 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (c > 255)
		c = c - 256;
	while (str[i])
	{
		if (str[i] == c)
			return (((char *)str) + i);
		else
			i++;
	}
	if (str[i] == '\0' && c == '\0')
		return (((char *)str + i));
	else
		return (NULL);
}

// int	main(void)
// {
// 	char str[15] = "Hello toi";
// 	int c = '\0';
// 	printf("%s\n", ft_strchr(str, c));
// }