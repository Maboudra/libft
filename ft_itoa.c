/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:57:57 by mayboudr          #+#    #+#             */
/*   Updated: 2024/04/30 23:34:53 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long nb)
{
	int	ln;

	ln = 0;
	if (nb < 0)
	{
		nb *= -1;
		ln++;
	}
	else if (nb == 0)
		ln++;
	while (nb > 0)
	{
		nb /= 10;
		ln++;
	}
	return (ln);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		i;
	char	*convert;

	nb = n;
	i = ft_len(nb);
	convert = ft_calloc(sizeof(char), i + 1);
	if (!convert)
		return (0);
	if (nb == 0)
	{
		convert[0] = 48;
		return (convert);
	}
	if (nb < 0)
	{
		convert[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		convert[--i] = 48 + nb % 10;
		nb /= 10;
	}
	return (convert);
}

// int main ()
// {
// 	printf("%s", ft_itoa(5456456));
// }