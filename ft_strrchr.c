/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:53:51 by seunkim           #+#    #+#             */
/*   Updated: 2020/03/03 05:04:36 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(char *s, int c)
{
	size_t	idx;
	size_t	len;
	
	len = ft_strlen(s);
	idx = len - 1;
	while (idx >= 0)
	{	
		if (s[idx] == (char)c)
			return(s + idx);
		idx--;
	}
	return (NULL);
}
