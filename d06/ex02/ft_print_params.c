/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 22:56:03 by tharris           #+#    #+#             */
/*   Updated: 2016/07/20 22:56:05 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

int		main(int argc, char *argv[])
{
	int count;

	count = 1;
	while (argc > count)
	{
		ft_putstr(argv[count]);
		ft_putchar('\n');
		count++;
	}
	return (0);
}
