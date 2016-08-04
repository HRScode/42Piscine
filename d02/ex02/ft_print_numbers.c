/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 15:55:02 by tharris           #+#    #+#             */
/*   Updated: 2016/07/14 15:55:10 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);

}

void ft_print_numbers(void)
{
	char c = '9';
	while (c >= '0')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_numbers();
	return (0);
}