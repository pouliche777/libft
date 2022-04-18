/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:03:52 by slord             #+#    #+#             */
/*   Updated: 2022/04/18 15:02:12 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*st;
	unsigned int	i;
	unsigned int	j;
	char c1[1];
	int h = 0;
		
	c1[0] = c;
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	st = ft_strtrim(s, c1);
	while (st[i])
	{
		if(st[i] == c && st[i - 1] != c)
			j++;
		i++;
	}
	if (j == 0)
		j++;

	ptr = ft_calloc(sizeof(char *),  j + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (st[i])
	{
		if (st[i] == c && st[i - 1] != c)
		{
			ptr[h] = ft_substr(st, j, i - j);
			j = i + 1;
			h++;
		}
		if (st[i + 1] == '\0')
		{
			ptr[h] = ft_substr(st, j, i - j + 1);
		}
		if (st[i + 1] == c && st[i] == c)
			j++;
		i++;
	}
	ptr[h + 1] = NULL;
	return(ptr);
}

