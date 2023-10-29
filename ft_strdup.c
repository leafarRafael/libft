/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:23:56 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/21 10:53:37 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*new_array;
	unsigned int	size;

	size = ft_strlen(s) + 1;
	new_array = malloc(size * sizeof(char));
	if (new_array == NULL)
		return (NULL);
	ft_strlcpy(new_array, s, size);
	return (new_array);
}
