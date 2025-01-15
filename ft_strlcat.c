/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:33:23 by mayboudr          #+#    #+#             */
/*   Updated: 2024/05/04 12:09:22 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= dst_len)
		return (dstsize + src_len);
	while (i < dstsize - dst_len - 1 && src[i])
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	return (src_len + dst_len);
}

// int main()
// {
// 	char dest[20] = "bonjour";
// 	char dest2[20] = "bonjour";
// 	char src[] =  "johnny";
// 	 printf("original : %zu dest = %s\n", strlcat(dest, src, 20), dest);
// 	 printf("libft : %zu dest = %s\n", ft_strlcat(dest2, src, 20), dest2);
// }