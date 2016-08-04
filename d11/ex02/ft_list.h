/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 18:52:44 by tharris           #+#    #+#             */
/*   Updated: 2016/07/27 18:52:46 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST.H
# define FT_LIST.H

typedef struct			s_list;
{
	struct		s_list 	*next;
	void				*data;

}t_list;	ft_list_push_front(t_list **begin_list, void *data);

#endif

