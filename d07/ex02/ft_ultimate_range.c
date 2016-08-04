/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:08:50 by tharris           #+#    #+#             */
/*   Updated: 2016/07/21 22:08:51 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *num;
	int x;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	num = (int*)malloc(sizeof(*num) * (max - min));
	x = 0;
	while (min < max)
	{
		num[x] = min;
		x++;
		min++;
	}
	*range = tab;
	return (x);
}
