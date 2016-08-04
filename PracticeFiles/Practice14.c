/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice14.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 12:49:40 by tharris           #+#    #+#             */
/*   Updated: 2016/08/01 12:49:41 by tharris          ###   ########.fr       */
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
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <=  'z'))
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
	char word[] = "Suhhh doood";

	rotone(word);
	return (0);
}