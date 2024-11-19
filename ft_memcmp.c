/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:39:37 by bbenaali          #+#    #+#             */
/*   Updated: 2024/11/16 15:04:27 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	ss2 = (const unsigned char *) s2;
	ss1 = (const unsigned char *) s1;
	if (n == 0)
		return (0);
	while (*ss1 == *ss2 && n - 1 > 0)
	{
		ss1++;
		ss2++;
		n--;
	}
	return (*ss1 - *ss2);
}
