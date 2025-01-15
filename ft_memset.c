/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:33:56 by mayboudr          #+#    #+#             */
/*   Updated: 2024/04/30 23:46:15 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*b;
	char	ca;

	b = (char *)s;
	ca = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		b[i] = ca;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char *s;
// 	s = strdup("bonjour");
// 	char a = 't';
// 	size_t n = 12;
// 	memset(s, a, n);
// 	printf("resultat : %s\n", s);
// 	s = strdup("bonjour");
// 	a = 't';
// 	n = 12;
// 	ft_memset(s, a, n);
// 	printf("resultat : %s\n", s);
// 	return (1);
// }