/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:10:02 by bbenaali          #+#    #+#             */
/*   Updated: 2024/11/16 17:21:04 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_strchr_start(char const *ss1, char const *set2)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (ss1[i] != '\0')
	{
		j = 0;
		while (set2[j] != '\0')
		{
			if (ss1[i] == set2[j])
				break ;
			j++;
		}
		if (set2[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

static size_t	ft_strlen_strchr_end(char const *ss1, char const *set2)
{
	size_t	i;
	int		j;

	j = 0;
	i = ft_strlen(ss1);
	if (i > 0)
		i = ft_strlen(ss1) - 1;
	while (i > 0)
	{
		j = 0;
		while (set2[j] != '\0')
		{
			if (ss1[i] == set2[j])
				break ;
			j++;
		}
		if (set2[j] == '\0')
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = ft_strlen_strchr_start(s1, set);
	end = ft_strlen_strchr_end(s1, set);
	if (end >= start)
		len = end - start + 1;
	else
		len = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[start], len + 1);
	return (str);
}
