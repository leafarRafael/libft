/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:29:33 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/27 08:16:10 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size == 0 && nmemb == 0)
	{
		size = 1;
		nmemb = 1;
	}
	array = malloc(size * nmemb);
	if (!array)
	{
		free(array);
		return (0);
	}
	ft_bzero(array, size * nmemb);
	return (array);
}
