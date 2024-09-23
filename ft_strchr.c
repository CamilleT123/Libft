/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:02:18 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/21 11:45:51 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if ((unsigned char)c == 0)
		return (((char *)str + ft_strlen(str)));
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			return (((char *)str) + i);
		else
			i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[15] = "Hello toi";
// 	int c = '\0';
// 	printf("%s\n", ft_strchr(str, c));
// }