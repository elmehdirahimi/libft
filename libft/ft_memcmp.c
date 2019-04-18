/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erahimi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:49:01 by erahimi           #+#    #+#             */
/*   Updated: 2019/04/10 12:58:19 by erahimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					i;
	const unsigned char	*sa;
	const unsigned char	*sb;

	i = 0;
	sa = s1;
	sb = s2;
	while (i < (int)n)
	{
		if (sa[i] != sb[i])
		{
			return (sa[i] - sb[i]);
		}
		i++;
	}
	return (0);
}
