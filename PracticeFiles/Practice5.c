 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 18:10:39 by tharris           #+#    #+#             */
/*   Updated: 2016/07/28 18:10:40 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(void)
{
	int nbr;

	nbr = 0;
	while (nbr <= '9')
	{
		ft_putchar(nbr);
		nbr++;
	}
}

int main(void)
{
	ft_putnbr();
	return (0);
}