/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 13:26:42 by tharris           #+#    #+#             */
/*   Updated: 2016/07/14 13:26:56 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);

}

void ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
		
	else
		ft_putchar('P');
	
		ft_putchar('\n');
}

