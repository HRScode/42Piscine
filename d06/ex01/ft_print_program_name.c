/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 22:27:45 by tharris           #+#    #+#             */
/*   Updated: 2016/07/20 22:27:47 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int 	main(int argc, char **agrv)
{
	int		count;
	char	*file;

	count = 0;
	file = argv[0];
	while (file[count] != '\0')
	{
		ft_putchar(file[count]);
		count++;
	}
	ft_putchar('\n');
	return (0);
}
