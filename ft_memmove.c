/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:18:39 by bbenaali          #+#    #+#             */
/*   Updated: 2024/11/19 09:59:08 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	s = (const unsigned char *) src;
	d = (unsigned char *) dst;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (d > s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else if (d < s)
	{
		while (len > i)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
