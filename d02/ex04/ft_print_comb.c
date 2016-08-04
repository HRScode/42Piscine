/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 19:45:28 by tharris           #+#    #+#             */
/*   Updated: 2016/07/14 19:45:36 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
	while (b <= '8')
		{
		while (c <= '9') 
			{
				ft_putchar (a);
				ft_putchar (b);
				ft_putchar (c);
				if (a != '7')
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				c++;
			}
			b++;
			c = (b + 1);
		}
		a++;
		b = (a + 1);
		c = (b + 1);
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_comb();
	return (0);
}	