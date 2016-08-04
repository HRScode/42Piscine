/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MorePractice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 12:51:03 by tharris           #+#    #+#             */
/*   Updated: 2016/07/29 12:51:04 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ft_putchar(str[i] -= 32);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ft_putchar(str[i] += 32);
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
	char derp[] = "The cooLLest BeaNS";

	ft_ulstr(derp);
	ft_putchar('\n');
	return (0);
}