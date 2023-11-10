/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:18:25 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/10 11:56:26 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	
	if (nmemb == 0 || size == 0 || size * nmemb >= 4294967295)
		return (NULL);
	ptr = malloc (size * nmemb);
	if (!ptr)
	 	return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}