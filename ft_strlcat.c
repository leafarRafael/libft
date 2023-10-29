/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:00:12 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/21 10:51:17 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_dst;
	size_t	s_src;

	s_dst = 0;
	if (dst && size)
		s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	if (s_dst > size)
		return (s_src + size);
	return (s_dst + ft_strlcpy(&dst[s_dst], src, size - s_dst));
}
