/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <jichompo@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 09:20:08 by jichompo          #+#    #+#             */
/*   Updated: 2024/02/08 16:39:07 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*src;

	if (n == 0)
		return ((void *)0);
	src = (char *)s;
	index = 0;
	while (index < n)
	{
		if (*(src + index) == (unsigned char)c)
			return (src + index);
		index++;
	}
	return ((void *)0);
}
