/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:53:51 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/09 18:04:00 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	i;
	
	if (!s)
		return (NULL);
	s2 = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (str[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = 0;
	return (s2);
}