/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 19:32:44 by tharris           #+#    #+#             */
/*   Updated: 2016/07/26 19:32:45 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST.H
# define FT_LIST.H

typedef struct			s_list;
{
	struct		s_list 	*next;
	void				*data;

}t_list;	*ft_create_elem(void *data);

#endif
