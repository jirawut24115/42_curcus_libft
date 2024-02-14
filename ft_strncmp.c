/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <jichompo@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:42:34 by jichompo          #+#    #+#             */
/*   Updated: 2024/02/08 16:54:21 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (*(s1 + index) != *(s2 + index))
			return (*(s1 + index) - *(s2 + index));
		index++;
	}
	return (0);
}
