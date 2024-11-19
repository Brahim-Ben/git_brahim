/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:27:34 by bbenaali          #+#    #+#             */
/*   Updated: 2024/11/14 15:21:38 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			j = i;
		i++;
	}
	if (j != -1 && s[j] == (unsigned char)c)
		return ((char *)&s[j]);
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
