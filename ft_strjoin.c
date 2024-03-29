/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:03:59 by seunkim           #+#    #+#             */
/*   Updated: 2020/04/03 17:23:09 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;
	size_t	idx;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(ptr = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	idx = -1;
	while (s1[++idx] && idx < s1_len)
		ptr[idx] = s1[idx];
	while (s2[idx - s1_len] && idx - s1_len < s2_len)
	{
		ptr[idx] = s2[idx - ft_strlen(s1)];
		idx++;
	}
	ptr[idx] = '\0';
	return (ptr);
}
