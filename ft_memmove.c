/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 21:48:46 by seunkim           #+#    #+#             */
/*   Updated: 2020/03/01 22:47:29 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t idx;

	if (dest <= src)
		ft_memcpy(dest, src, len);
	else
	{
		idx = len - 1;
		while (idx >= 0)
		{	
			((unsigned char*)dest)[idx] = ((unsigned char*)src)[idx];
			idx--;
		}
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
        char array[10];

        memset(array, 0, sizeof(array));
        strcpy(array, "test");

        printf("original : %s\n", array);

        ft_memmove(array+2, array, strlen("test"));

        printf("after memmove : %s\n", array);

        return 0;
}
