/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttroll <ttroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:54:59 by ttroll            #+#    #+#             */
/*   Updated: 2024/11/27 22:08:51 by ttroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;
	int					i;

	d = (unsigned char *)dst;
	if (d < s)
		return (ft_memcpy((void *)d, (const char *)s, (size_t)len));
	if ((d > s))
	{
		i = (int)len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
		return (dst);
	}
	else
		return (dst);
}
