/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 17:31:36 by seunkim           #+#    #+#             */
/*   Updated: 2020/03/05 19:53:31 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_getstrlen(char const *s1, char const *set)
{
	size_t	count;
	size_t	idx;
	size_t	set_idx;
	size_t	idx_tmp;

	count = 0;
	idx = 0;
	if (ft_strlen(set) == 0)
		return (ft_strlen(s1));
	while (s1[idx])
	{
		set_idx = 0;
		if (s1[idx] == set[set_idx])
		{	
			set_idx++;
			idx_tmp = idx + 1;
			while (set[set_idx] && s1[idx_tmp++] == set[set_idx++])
			if (set_idx == ft_strlen(set))
				idx = idx_tmp;	
		}
		idx++;
		count++;
	}
	return (count);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int	idx;
	int	idx_tmp;
	int	set_idx;
	size_t	size;
	char	*str;

	size = ft_getstrlen(s1, set);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	idx = -1;
	while (s1[++idx])
	{	
		set_idx = 0;
		if (s1[idx] == set[set_idx])
		{
			set_idx++;
			idx_tmp = idx + 1;
			while (set[set_idx] && s1[idx_tmp++] == set[set_idx++])
			if (set_idx == (int)ft_strlen(set))
				idx = idx_tmp;
		}
		*(str++) = s1[idx];
	}
	*str = '\0';
	return (str - size);
}

