/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:48:26 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/08 16:58:19 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		j = 0;	
		while (big[i + j] == little[j] && j < len)
		{
			if (j == len - 1 || (little[j] == 0 && j < len - 1))
				return (&((char *)big)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
// int 	main(void)
// {
// 	char str[] = "totototoi";
// 	char to_find[] = "yo";

// 	printf("%s\n", ft_strnstr(str, to_find, 3));
// }