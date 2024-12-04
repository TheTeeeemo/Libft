/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttroll <ttroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:37:54 by ttroll            #+#    #+#             */
/*   Updated: 2024/11/27 22:25:53 by ttroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (destination == NULL && source == NULL)
		return (NULL);
	d = (unsigned char *)destination;
	s = (const unsigned char *)source;
	i = 0;
	while (i < num)
	{
		*d = s[i];
		d++;
		i++;
	}
	return (destination);
}
