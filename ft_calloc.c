/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <rbutzke@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:29:33 by rbutzke           #+#    #+#             */
/*   Updated: 2023/11/03 15:06:00 by rbutzke          ###   ########.fr       */
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
