/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:00:36 by slord             #+#    #+#             */
/*   Updated: 2022/04/18 18:24:52 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return (s);
}
