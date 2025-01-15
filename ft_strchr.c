/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:54:02 by mayboudr          #+#    #+#             */
/*   Updated: 2024/05/01 00:11:14 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int					i;
	unsigned char		ca;

	ca = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ca)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == ca)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "je comprends rien";

// 	printf("original : %s\n", strchr(str, '\0'));
// 	printf("libft : %s", ft_strchr(str, '\0'));
// }
