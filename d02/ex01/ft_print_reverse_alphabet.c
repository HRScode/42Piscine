/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 11:34:33 by tharris           #+#    #+#             */
/*   Updated: 2016/07/14 11:45:08 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_reverse_alphabet(void)

{
	char letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
	ft_putchar('\n');
}

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}


