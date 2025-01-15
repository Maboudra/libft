/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:03:25 by mayboudr          #+#    #+#             */
/*   Updated: 2024/05/01 00:15:45 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int					i;
	unsigned char		ca;
	char				*final;

	ca = (unsigned char)c;
	i = 0;
	final = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == ca)
			final = ((char *)&s[i]);
		i++;
	}
	if (s[i] == ca)
		final = ((char *)&s[i]);
	return (final);
}

// int	main(void)
// {
// 	char	str[] = "je comprends rien";

// 	printf("original : %s\n", strrchr(str, 'r'));
// 	printf("libft : %s", ft_strrchr(str, 'r'));
// }
