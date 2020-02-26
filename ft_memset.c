/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:59:10 by seunkim           #+#    #+#             */
/*   Updated: 2020/02/26 18:26:22 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void*	ft_memset(void *b, int c, size_t len)
{
	unsigned int	idx;
	unsigned int	size;
	unsigned char	value;
	char		*ptr;
	
	idx = 0;
	value = c;
	size = len;
	ptr = (char*)b;
	while(ptr[idx] && idx < size)
	{
		ptr[idx] = value;
		idx++;
	}
	return (b);
}

#include <stdio.h>

int main(void)
{
	char str[] = "almost every programmerr";
	ft_memset(str, '-', 6);
	puts(str);
}
