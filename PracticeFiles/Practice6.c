/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice6.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 18:23:08 by tharris           #+#    #+#             */
/*   Updated: 2016/07/28 18:23:10 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
	printf(count);
	return(count);
}

int main(void)
{
	ft_strlen("ok\n");
	return (0);
}