/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:06:05 by bbenaali          #+#    #+#             */
/*   Updated: 2024/11/16 17:18:53 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*arr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	arr = malloc (size * count);
	if (arr == NULL)
		return (NULL);
	ft_bzero (arr, count * size);
	return (arr);
}
