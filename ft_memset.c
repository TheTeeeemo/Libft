/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttroll <ttroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:15:02 by ttroll            #+#    #+#             */
/*   Updated: 2024/11/27 22:09:10 by ttroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cr;
	size_t			i;

	i = 0;
	cr = (unsigned char *)b;
	while (i < len)
	{
		*cr = (unsigned char)c;
		cr++;
		i++;
	}
	return (b);
}
