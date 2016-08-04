/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 00:45:02 by tharris           #+#    #+#             */
/*   Updated: 2016/07/22 00:45:04 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_button(int i, int j, int k)
{
	if ((j <= i && k >= i) || (j <= k && k >= i))
	{
		return (j);
	}
	if ((j < k && j >= i) || (j > k && k <= i))
	{
		return (i);
	}
	if ((k > j && i > j) || (k < i && j == i))
	{
		return (k);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_button(20, 56, 103));
	return (0);
}
