/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:18:25 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/09 18:31:07 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
	void *ptr;
	
	ptr = malloc (size * nmemb);
	if (!ptr)
		return (NULL);
	// The memory is set to zero. 
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (ptr)
}