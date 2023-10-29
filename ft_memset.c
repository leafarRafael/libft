/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:27:10 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/17 18:23:30 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*y;
	unsigned char	add;
	size_t			i;

	y = (unsigned char *) s;
	add = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		y[i] = add;
		i++;
	}
	return (s);
}
