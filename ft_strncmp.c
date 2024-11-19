/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:05:06 by bbenaali          #+#    #+#             */
/*   Updated: 2024/11/14 15:30:34 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 == *s2 && *s1 && n > i)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == i)
		return (i);
	else if (n < i)
		return (-1);
	return ((unsigned char )*s1 - (unsigned char)*s2);
}
