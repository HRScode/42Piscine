/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 19:28:59 by tharris           #+#    #+#             */
/*   Updated: 2016/07/15 19:29:02 by tharris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_div_mod(int a, int b, int *div, int *mod)
{

	*div = a / b;
	*mod = a % b;

}