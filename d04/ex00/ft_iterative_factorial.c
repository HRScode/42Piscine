/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 19:51:33 by tharris           #+#    #+#             */
/*   Updated: 2016/07/16 19:51:36 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int total;

	total = 1;
	if (nb > 0)
	{
		while (nb > 1)
			;
		{
			total *= nb;
			nb--;
		}
		return (total);
	}
	else
	{
		return (0);
	}
}
