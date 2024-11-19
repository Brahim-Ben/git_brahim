/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:06:17 by bbenaali          #+#    #+#             */
/*   Updated: 2024/11/14 14:38:51 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	int		j;
	size_t	len_src;

	j = 0;
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (0);
	if (len_dest >= dstsize)
		return (len_src + dstsize);
	while (src[j] != '\0' && dstsize > len_dest + 1 + j)
	{
		dst[len_dest + j] = src[j];
		j++;
	}
	dst[len_dest + j] = '\0';
	return (len_dest + len_src);
}
