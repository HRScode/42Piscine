/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 18:59:49 by tharris           #+#    #+#             */
/*   Updated: 2016/07/25 18:59:52 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
		{
			count++;
		}
		i++;
	}
	return (count);
}
