/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Practice13.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 20:19:23 by tharris           #+#    #+#             */
/*   Updated: 2016/07/31 20:19:25 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c , 1);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main ()
{
   char str1[15];
   char str2[15];
   int ret;


   strcpy(str1, "abcdef");
   strcpy(str2, "abcdef");

   ret = ft_strcmp(str1, str2);

   if(ret < 0)
   {
      printf("str1 is less than str2");
   }
   else if(ret > 0) 
   {
      printf("str2 is less than str1");
   }
   else 
   {
      printf("str1 is equal to str2");
   }
   
   return(0);
}