/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 18:49:35 by tharris           #+#    #+#             */
/*   Updated: 2016/07/21 18:49:37 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_takes_place(int hour)
{
	char	*shorten;
	int		clock;

	clock = 1;
	shorten = "THE FOLLOWING TAKES PLACE BETWEEN";
	if (clock == 12)
	{
		printf("%s %d.00 A.M. AND %d.00 P.M.\n", shorten, hour, (hour + 1));
	}
	else if (clock == 23)
	{
		printf("%s %d.00 P.M. AND %d.00 A.M.\n", shorten, hour, (hour + 1));
	}
	else if (clock == 13)
	{
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", shorten, hour, (hour + 1));
	}
	else
	{
		printf("%s %d.00 A.M. AND %d.00 P.M.\n", shorten, hour, (hour + 1));
	}
}
