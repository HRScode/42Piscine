/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 16:36:02 by tharris           #+#    #+#             */
/*   Updated: 2016/07/28 16:36:03 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *num;
	int i;

	if (min >= max)
		return (0);
	num = (int*)malloc(sizeof(int*) * max - min);
	i = 0;
	while (min < max)
	{
		num[i] = min;
		i++;
		min++;
	}
	return (0);
}

int main(void)
{
	int num;
	int i;

	i = num;
	ft_range(num);
	return (0);
}

