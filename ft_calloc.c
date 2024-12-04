/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttroll <ttroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:11:32 by ttroll            #+#    #+#             */
/*   Updated: 2024/11/27 22:05:06 by ttroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	all_size;
	void	*memory;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	all_size = nmemb * size;
	memory = malloc(all_size);
	if (memory == NULL)
		return (NULL);
	ft_memset(memory, 0, all_size);
	return (memory);
}
