/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice20.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 16:03:22 by tharris           #+#    #+#             */
/*   Updated: 2016/08/03 16:03:23 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] >= 'z'))
		{
			ft_putchar(str[i] + 1);
		}
		else if (str[i] == 'a' || str[i] == 'z')
		{
			ft_putchar(str[i] - 1);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;	
	}
}

int main(void)
{
	char word[] = "abcdefghijklmnopqrstuvwxyz";

	rotone(word);
	return (0);
}