/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:11:13 by slord             #+#    #+#             */
/*   Updated: 2022/04/18 16:19:30 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list  **n_list;
   	n_list = NULL;	
	if(!lst || !*f || !del)
		return (NULL);
		ft_lstiter(lst, (*f));

		while (lst)
		{
			ft_lstadd_back(n_list, lst);
			lst = lst->next;
		}
	return (*n_list);
}
