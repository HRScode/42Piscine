/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 18:55:50 by tharris           #+#    #+#             */
/*   Updated: 2016/07/25 18:55:51 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *x;

	i = 0;
	if (x == malloc(sizeof(int*) * length))
	{
		return (NULL);
	}
	while (i < length)
	{
		x[i] = f(tab[i]);
		i++;
	}
	return (x);
}
