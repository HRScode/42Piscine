/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 15:54:41 by tharris           #+#    #+#             */
/*   Updated: 2016/07/21 15:54:46 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *num;
	int i;

	if (min >= max)
		return (NULL);
	num = (int*)malloc(sizeof(*num) * (max - min));
	i = 0;
	while (min < max)
	{
		num[i] = min;
		i++;
		min++;
	}
	return (num);
}
