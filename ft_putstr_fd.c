/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 01:11:27 by seunkim           #+#    #+#             */
/*   Updated: 2020/04/03 17:21:11 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	idx;

	idx = 0;
	if (!s)
		return ;
	while (s[idx])
	{
		write(fd, &s[idx], 1);
		idx++;
	}
}
