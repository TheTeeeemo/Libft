/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttroll <ttroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:35:49 by ttroll            #+#    #+#             */
/*   Updated: 2024/11/27 18:53:02 by ttroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*cr;
	size_t			i;

	i = 0;
	cr = (unsigned char *)b;
	while (i < len)
	{
		cr[i] = 0;
		i++;
	}
	return (b);
}
