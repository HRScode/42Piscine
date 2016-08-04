/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 14:38:50 by tharris           #+#    #+#             */
/*   Updated: 2016/07/30 14:38:51 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'A' && str[i] <= 'Z') || (str[i] <= 'a' && str[i] >= 'z'))
		{
			ft_putchar(str[i] + 1);
		}
		else if (str[i] == 'Z')
		{
			ft_putchar('A');
		}
		else if (str[i] == 'z')
		{
			ft_putchar('a');
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	return (0);
}
