/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:12:31 by mayboudr          #+#    #+#             */
/*   Updated: 2024/05/01 01:22:35 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char str, const char *c)
{
	int	j;

	j = 0;
	while (c[j])
	{
		if (str == c[j])
			return (1);
		j++;
	}
	return (0);
}

static char	*ft_sub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (len > i)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*dst;
	int		i;

	if (!s1 || !set)
		return (0);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = 0;
	i = 0;
	end = ft_strlen(s1) - 1;
	while (ft_checkset(s1[start], set))
		start++;
	while (ft_checkset(s1[end], set))
		end--;
	dst = ft_sub(s1, start, end - (start - 1));
	return (dst);
}

// int main()
// {
// 	char *str;
// 	char *set;

// 	set = "ab";
// 	str = "ababaaaMy name is Simonbbaaabba";
// 	printf("%s", ft_strtrim(str, set));
// }
