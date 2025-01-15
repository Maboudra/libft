/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:23:19 by mayboudr          #+#    #+#             */
/*   Updated: 2024/05/01 12:40:34 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ns;

	i = 0;
	if (!s || !f)
		return (NULL);
	ns = malloc(ft_strlen(s) + 1);
	if (!ns)
		return (NULL);
	while (s[i])
	{
		ns[i] = s[i];
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = 0;
	return (ns);
}

// char ft_test(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		c += 32;
// 	else
// 		c -= 32;
// 	return (c);
// }

// int main ()
// {
// 	printf("%s", ft_strmapi("hello", ft_test));
// }
