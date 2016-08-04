/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice8.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 18:29:31 by tharris           #+#    #+#             */
/*   Updated: 2016/07/30 18:29:32 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_expand_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void spacey(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
	{
		ft_putchar(' ');
		s++;
	}
}

char	*getNew(char *str)
{
	int index;
	int i;
	char *new;

	index = 0;
	i = 0;
	while (str[index] != '\0')
	{
		while (str[index] == ' ' || str[index] == '\t')
		{
			index++;
		}
		while (str[index] != ' ' && str[index] != '\t')
		{
			new[i] = str[index];
			index++;
			i++;
		}
		new[i++] = ' ';
		new[i++] = ' ';
		new[i] = ' ';
	}
}

char	*trimmer(char *str)
{
	int trim;

	trim = 0;
	while(str[trim] != '\0')
	{
		ft_putchar(str[trim]);
		trim++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		getnew(argv[2]);
	return (0);
}
