/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:56:44 by mayboudr          #+#    #+#             */
/*   Updated: 2024/04/21 14:05:01 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// void	ft_print_result(int n)
// {
// 	if (n)
// 		write(1, "1", 1);
// 	else
// 		write(1, "0", 1);
// }

// int		main()
// {
// 	int		i;

// 		i = 0;
// 		while (i <= 47)
// 		{
// 			ft_print_result(ft_isprint(i));
// 			i++;
// 		}

// }