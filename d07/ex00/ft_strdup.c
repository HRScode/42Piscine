/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 13:15:33 by tharris           #+#    #+#             */
/*   Updated: 2016/07/21 13:15:35 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#Define len 42000000

int		strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;
	int		length;

	i = 0;
	if (!src)
		return (0);
	length = ft_strlen(src);
	cpy = (char *)malloc(length + 1);
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
