/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrtest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 22:36:16 by tharris           #+#    #+#             */
/*   Updated: 2016/07/18 22:36:19 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar (char c);

void	ft_putnbr(int nb)
{
	int count;
	int b[10];

	count = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
	{
		b[count] = nb % 10;
		count++;
		nb /= 10;
	}
	while (count > 0)
	{
		count--;
		ft_putchar(b[count] + 48);
	}
	ft_putchar('\n');
}
