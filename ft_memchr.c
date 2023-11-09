/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:41:59 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/08 18:22:57 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void	*ft_memchr(const void *s, int c, size_t n)
 {
	size_t	i;

	i = 0;
	while (i < n )
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		else
			i++;
	}
	if (((unsigned char *)s)[i] == '\0' && (unsigned char)c == '\0')
		return (((unsigned char *)s + i));
	else
		return (NULL); 
 }

// int	main(void)
// {
// 	char str[15] = "Hello toi";
// 	int c = 'o';
// 	void *ptr = ft_memchr(((const void *)str), c, 7);
// 	printf("%s\n", *ptr);
// }