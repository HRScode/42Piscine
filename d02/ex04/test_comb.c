/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 19:45:28 by tharris           #+#    #+#             */
/*   Updated: 2016/07/14 19:45:36 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb(void);
void ft_putchar(char c);


void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';

	while (a <= '7')
	{

		
		while (b <= '8')
		{
			
			while (c <= '9') 
			{


				ft_putchar (a);
				ft_putchar (b);
				ft_putchar (c);

					if (a != '7')
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				c++;
			}
			b++;
			c = (b + 1);
		}
		a++;
		b = (a + 1);
		c = (b + 1);

	}

}

int main()
{
	ft__print_comb();
	return(0);

}