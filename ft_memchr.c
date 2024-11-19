/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:36:27 by bbenaali          #+#    #+#             */
/*   Updated: 2024/11/16 17:19:15 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	size_t				i;

	i = 0;
	src = (const unsigned char *) s;
	while (n > i)
	{
		if (src[i] == (unsigned char) c)
			return ((void *)(src + i));
		i++;
	}
	return (NULL);
}
