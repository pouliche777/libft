/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:40:04 by slord             #+#    #+#             */
/*   Updated: 2022/04/11 20:03:04 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countdigit(int c)
{
	int	ndigit;

	if (c == 0)
		return (1);
	ndigit = 0;
	if (c < 0)
	{
		ndigit++;
		c = c * -1;
	}
	while (c > 0)
	{
		c = c / 10;
		ndigit++;
	}
	return (ndigit);
}

char	*ft_itoa(int n)

{
	char	*ptr;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_countdigit(n);
	if (!(ptr = ft_calloc(i + 1, sizeof(char))))
		return (NULL);
	if (n == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (n < 0)
	{
		ptr[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		ptr[i - 1] = n % 10 + '0';
		i--;
		n = n / 10;
	}
	return (ptr);
}
