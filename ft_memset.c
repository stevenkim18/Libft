/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:59:10 by seunkim           #+#    #+#             */
/*   Updated: 2020/04/03 17:41:28 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			idx;
	unsigned char	value;
	unsigned char	*ptr;

	idx = 0;
	value = c;
	ptr = (unsigned char *)b;
	while (idx < len)
	{
		ptr[idx] = value;
		idx++;
	}
	return (b);
}
