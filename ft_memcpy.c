/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:43:44 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/14 11:08:54 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && dest != src)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return ((char *)dest);
}

// int main(void)
// {
// 	char str[50] = "je suis fatiguee";
// 	char *ptr;
// 	ptr = ft_memcpy(str + 4, str, 16);
// 	printf("%s\n", ptr);
// }