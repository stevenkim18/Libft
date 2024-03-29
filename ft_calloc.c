/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:18:39 by seunkim           #+#    #+#             */
/*   Updated: 2020/04/03 19:42:48 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	idx;
	char	*tmp;

	idx = count * size;
	if (!(ptr = malloc(count * size)))
		return (NULL);
	tmp = (char *)ptr;
	while (idx > 0)
	{
		*tmp = 0;
		tmp++;
		idx--;
	}
	return (ptr);
}
