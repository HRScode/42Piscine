/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice15.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 14:13:33 by tharris           #+#    #+#             */
/*   Updated: 2016/08/01 14:13:34 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c , 1);
}

void ft_putnbr(int nb)
{
	int num;

	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar(num % 10 + 48);
}

int ft_atoi(char *str)
{
	int i;
	int result;
	int neg;

	i = 0;
	result = 0;
	neg = 0;
	while (str[i] < 23)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * neg);
}

int main(void)
{
	char j[] = "123456";
	int a;
	int b = -1231456;

	a = ft_atoi(j);
	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}

