/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:51:26 by bbenaali          #+#    #+#             */
/*   Updated: 2024/11/16 17:19:11 by bbenaali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_numbers(int n)
{
	int	countr;

	countr = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		countr++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		countr++;
	}
	return (countr);
}

static char	*n_positive(char *str, int n, size_t len)
{
	len--;
	while (len >= 0 && n != 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		if (n == 0)
			break ;
		len--;
	}
	return (str);
}

static char	*n_negative(char *str, int n, size_t len)
{
	str[0] = '-';
	len--;
	n = -n;
	while (len > 0)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	originalen;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_count_numbers(n);
	originalen = len;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	else if (n > 0)
		str = n_positive(str, n, len);
	else if (n < 0)
		str = n_negative(str, n, len);
	str[originalen] = '\0';
	return (str);
}
