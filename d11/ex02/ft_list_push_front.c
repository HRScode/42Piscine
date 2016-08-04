/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 18:52:32 by tharris           #+#    #+#             */
/*   Updated: 2016/07/27 18:52:33 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_list_push_front(t_list **begin_list, void *data)
{
		t_list *ptr;

		ptr = ft_list_create_elem(data);
		ptr->next = *begin_list;
		begin_list = ptr;
}