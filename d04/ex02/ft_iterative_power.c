/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 21:20:46 by tharris           #+#    #+#             */
/*   Updated: 2016/07/16 21:20:49 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (power >= 1)
	{
		while (i <= power)
		{
			result *= nb;
			i++;
		}
		return (result);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
