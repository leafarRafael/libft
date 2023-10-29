/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:13:15 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/28 15:18:14 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_set(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	size;
	char	*helper;

	i = 0;
	count = 0;
	helper = ft_strtrim(s, &c);
	if (!helper)
		return (0);
	size = ft_strlen(helper);
	while (i != size)
	{
		if (helper[i] == c && helper[i +1] != c)
			count++;
		if (helper[i +1] == '\0' && helper[i] != c)
			count++;
		i++;
	}
	free(helper);
	return (count);
}

static void	ft_cpy(size_t p, char **m, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;

	j = 0;
	i = 0;
	while (i < p)
	{
		size = 0;
		while (s[j] == c)
			j++;
		if (s[j] != c)
		{
			while (s[j] != '\0' && s[j] != c)
			{
				j++;
				size++;
			}
			m[i] = ft_substr(&s[j - size], 0, size);
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**m;
	size_t	p;

	if (!s)
		return (NULL);
	p = count_set(s, c);
	m = (char **) ft_calloc(p + 1, sizeof(char *));
	if (!m)
		return (0);
	ft_cpy(p, m, s, c);
	return (m);
}
