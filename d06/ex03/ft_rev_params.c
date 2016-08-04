/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 23:02:37 by tharris           #+#    #+#             */
/*   Updated: 2016/07/20 23:02:43 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int count++;

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

	count = argc - 1;
	while (count > 0)
	{
		ft_putstr(argv[count]);
		ft_putchar('\n');
		count--;
	}
	return (0);
}
