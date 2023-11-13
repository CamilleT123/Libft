/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:56:31 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/13 17:56:24 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// # include <fcntl.h>
// int main(void)
// {

// 	int fd = open("tripouille.txt", O_RDWR | O_CREAT, 0777);

// 	ft_putchar_fd('k', fd);
// 	close(fd);
// }
