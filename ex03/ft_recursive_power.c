/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:23:01 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/15 14:50:12 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int		ft_recursive_power(int nb, int power)
{
	int		result;

	result = 1;

	if(power == 0)
	{
		return(1);
	}

	if (power > 0)
	{
		return( nb * ft_recursive_power(nb , power-1));
	}
	return(0);
}


