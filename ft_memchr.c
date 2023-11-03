/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:49:37 by rbutzke           #+#    #+#             */
/*   Updated: 2023/11/03 15:06:52 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;
	size_t			i;

	a = (unsigned char *) s;
	b = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
			return (&a[i]);
		i++;
	}
	return (NULL);
}
