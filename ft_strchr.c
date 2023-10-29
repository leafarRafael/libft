/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:49:33 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/20 09:03:34 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	int				i;
	int				size;
	char			*z;

	i = 0;
	ch = (unsigned char) c;
	z = (char *) s;
	if (ch < 0 || ch > 255)
		return (NULL);
	if (ch == '\0')
	{
		size = ft_strlen(s);
		return (&z[size]);
	}
	while (z[i] != '\0')
	{
		if (z[i] == ch)
		{
			return (&z[i]);
			break ;
		}
		i++;
	}
	return (NULL);
}
