/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 12:48:09 by tharris           #+#    #+#             */
/*   Updated: 2016/07/28 12:48:11 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int word_count(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= ' ')
		{
			if (str[i - 1] > ' ')
			{
				words++;
			}
		}
		i++;
	}
	words++;
	printf("%d\n", words);
	return (0);
}

char *char_count(char *str, int *index)
{
	char *word;
	int i;
	int start;
	int end;

	i = *index;
	while (str[i] <= ' ')
		i++;
	start = i;
	while (str[i] > ' ')
		i++;
	end = i;
	*index = i;
	word = malloc(sizeof(*word) * end - start);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	printf("%s\n", word
	return (word);
}

char **ft_split_whitespaces(char *str)
{
	char **array;
	int i;
	int k;

	i = 0;
	k = 0;
	array = malloc(sizeof(char**) * word_count(str) + 1);
	while (k < word_count(str + 1))
	{
		array[k] = char_count(str, &i);
		k++;
	}
	printf("array [0]%s\n", array[0]);
	array[k] = 0;
	return (array);
}

int main(void)
{
	char c[] = "Something random woo!";
	ft_split_whitespaces(c);
	return (0);
}