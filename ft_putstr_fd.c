/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctruchot <ctruchot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:05:22 by ctruchot          #+#    #+#             */
/*   Updated: 2023/11/13 17:55:56 by ctruchot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// write (fd, s, strlen(s))

// # include <fcntl.h>
// int main(void)
// {
// 	char s[10] = "\ncoucou\n";
// 	int fd = open("tripouille.txt", O_RDWR | O_CREAT, 0777);

// 	ft_putstr_fd(s, fd);
// 	close(fd);
// }