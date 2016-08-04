/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice16.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 15:11:35 by tharris           #+#    #+#             */
/*   Updated: 2016/08/01 15:11:36 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//aff_first_param
#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int main(int ac, char **av)
{
	int c;

	c = 0;
	if (ac >= 2)
	{
		write(1, av[1], ft_strlen(av[1]));
	}
	write (1, "\n", 1);
	return (0);
}