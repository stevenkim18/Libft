/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:33:07 by seunkim           #+#    #+#             */
/*   Updated: 2020/04/03 17:31:20 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t	idx;

	if (!s)
		return (NULL);
	if (ft_strlen(s) > start)
	{
		if (ft_strlen(s) >= start + len)
			size = len;
		else
			size = ft_strlen(s) - start;
	}
	else
		return ("");
	if (!(substr = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	s += start;
	idx = -1;
	while (s[++idx] && idx < len)
		substr[idx] = s[idx];
	substr[idx] = '\0';
	return (substr);
}
