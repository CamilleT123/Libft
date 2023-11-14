/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:45:40 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/14 11:28:11 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (!dest && !src)
		return (dest);
	if (src > dest)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	if (src < dest)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}

// int main(void)
// {
// 	char	str[100] = "C'est pas joli";

// 	ft_memmove(str + 6, str, 25);
// 	printf("str = %s\n", str);
// }
