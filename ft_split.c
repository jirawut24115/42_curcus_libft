/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichompo <jichompo@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:00:11 by jichompo          #+#    #+#             */
/*   Updated: 2024/02/08 21:40:11 by jichompo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_count(char *str, char charset)
{
	int	word_count;

	word_count = 0;
	while (*str)
	{
		if (*str == charset)
			str++;
		else
		{
			if (*(str + 1) == charset || *(str + 1) == '\0')
				word_count++;
			str++;
		}
	}
	return (word_count);
}

char	*ft_create_word(char *str, char charset)
{
	char	*result;
	int		len;
	int		index;

	len = 0;
	index = 0;
	while (*str != charset)
	{
		len++;
		str++;
	}
	result = malloc(sizeof(char) + len + 1);
	str -= len;
	while (*str != charset)
	{
		result[index] = *str;
		index++;
		str++;
	}
	result[index] = '\0';
	return (result);
}

char	**ft_split(char const *str, char charset)
{
	char	**result;
	int		word_count;
	int		index;
	int		len;

	word_count = ft_word_count((char *)str, charset);
	result = malloc(sizeof(char *) * (word_count + 1));
	index = 0;
	while (*str && index < word_count)
	{
		len = 0;
		while (*str == charset)
			str++;
		while (*(str + len) != charset && *(str + len))
			len++;
		if (len > 0)
		{
			result[index] = ft_create_word((char *)str, charset);
			index++;
		}
		str += len;
	}
	result[word_count] = 0;
	return (result);
}
