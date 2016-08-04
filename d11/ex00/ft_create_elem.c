/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 19:04:50 by tharris           #+#    #+#             */
/*   Updated: 2016/07/26 19:04:52 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list			*ft_create_elem(void *data)
{
		t_list *elem;

		elem = (t_list*)malloc(sizeof(t_list));
		if (elem)
		{
			elem->next = 0;
			elem->data = data;
		}
		return (elem);
}
