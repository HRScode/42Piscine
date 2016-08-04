/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 14:51:04 by tharris           #+#    #+#             */
/*   Updated: 2016/07/16 14:51:07 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
