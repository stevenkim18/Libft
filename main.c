/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 18:16:05 by seunkim           #+#    #+#             */
/*   Updated: 2020/04/04 18:16:33 by seunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int main(void)
{	
	// char dest[] = "rrrrrrrrrrrrrrr";
	// size_t size = ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);
	// printf("size = %lu\n", size);
	// printf("%s\n", dest);

	// char **ptr = ft_split("", 'z');
	// printf("%s\n", ptr[0]);

	char	**tabstr;

	if (!(tabstr = ft_split("", 'z')))
			ft_print_result("NULL");
	else
		if (!tabstr[0])
			ft_print_result("ok\n");
	
}
