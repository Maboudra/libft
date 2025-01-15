/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 09:45:19 by mayboudr          #+#    #+#             */
/*   Updated: 2024/04/22 16:47:54 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + 48, fd);
	}
}

// int main()
// {
// 	int fd;
// 	fd = 0;
//     ft_putnbr_fd (9, fd);
//     ft_putchar_fd ('\n', fd);
//      ft_putnbr_fd (-9, fd);
//     ft_putchar_fd ('\n', fd);
//      ft_putnbr_fd (-2147483648, fd);
//     ft_putchar_fd ('\n', fd);
//      ft_putnbr_fd (957687, fd);
//     ft_putchar_fd ('\n', fd);
// }