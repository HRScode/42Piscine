/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 12:44:54 by tharris           #+#    #+#             */
/*   Updated: 2016/07/31 12:44:56 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	int size;
	char *ret;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	ret = (char*)malloc(sizeof(*ret) * size);
	while (i < size)
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (0);
}

int main(void)
{
	char word[6] = "Duhh";
	char src;

	word = src;
	ft_strdup(src);
	return (0);
}