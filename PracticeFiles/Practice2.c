/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 14:43:53 by tharris           #+#    #+#             */
/*   Updated: 2016/07/28 14:43:59 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1); //Writes to function
}

void yoyoyo(void)
{
	char c; //Declares Char

	c = 'a'; //Assigning my variable
	while (c >= 'a' && c <= 'z') //loop
	{
		if ((c % 2) == 0) //Takes the remainder
		{
			ft_putchar(c +('A' - 'a')); //Basically replacing.
		}
		else
		{
			ft_putchar(c);
		}
		c++; //Increments variables thru a-z
	}
}

int main(void)
{
	yoyoyo();
	ft_putchar('\n');
	return (0);
}