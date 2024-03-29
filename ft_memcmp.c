/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 03:08:24 by seunkim           #+#    #+#             */
/*   Updated: 2020/04/03 17:58:22 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			idx;
	unsigned char	*s1_t;
	unsigned char	*s2_t;

	idx = 0;
	s1_t = (unsigned char *)s1;
	s2_t = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (idx + 1 < n && s1_t[idx] == s2_t[idx])
		idx++;
	return (s1_t[idx] - s2_t[idx]);
}
