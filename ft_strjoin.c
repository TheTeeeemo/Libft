/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttroll <ttroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:26:35 by ttroll            #+#    #+#             */
/*   Updated: 2024/11/27 22:00:03 by ttroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*memory;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	memory = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (memory == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		memory[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		memory[i] = s2[j];
		i++;
		j++;
	}
	memory[i] = '\0';
	return (memory);
}
