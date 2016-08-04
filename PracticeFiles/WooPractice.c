/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WooPractice.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 10:47:22 by tharris           #+#    #+#             */
/*   Updated: 2016/07/27 10:47:24 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void last_word(char *fuck)
{
	int i;

	i = 0;
	while (fuck[i] == ' ' || fuck[i] == '\t')
	{
		i++;
	}
	while (fuck[i] != '\t' && fuck[i] != ' ')
	{
		ft_putchar(fuck[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
