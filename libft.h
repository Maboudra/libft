/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayboudr <mayboudr@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 09:03:17 by mayboudr          #+#    #+#             */
/*   Updated: 2024/05/04 11:21:24 by mayboudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *str);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

void	*ft_memchr(const void *s, int c, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_atoi(const char *str);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_tolower(int c);

int		ft_toupper(int c);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *s1);

char	*ft_strjoin(const char *s1, const char *s2);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *str, int fd);

void	ft_putendl_fd(char *str, int fd);

void	ft_putnbr_fd(int nb, int fd);

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_substr(const char *s, unsigned int start, size_t len);

char	*ft_strtrim(const char *s1, const char *set);

char	**ft_split(const char *s, char c);

char	*ft_itoa(int n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif