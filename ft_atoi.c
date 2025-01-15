/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:55:47 by mayboudr          #+#    #+#             */
/*   Updated: 2024/05/04 12:01:42 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	val;

	i = 1;
	val = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		val *= 10;
		val += *str - '0';
		str++;
		if (val > LLONG_MAX && i > 0)
			return (-1);
		if (val > LLONG_MAX && i < 0)
			return (0);
	}
	return (val * i);
}

// int	main(void)
// {
// 	char str[] = "      999999999999999999";
// 	printf("%d\n", atoi(str));
// 	printf("%d", ft_atoi(str));
// }