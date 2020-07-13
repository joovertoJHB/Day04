/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:38:44 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/13 12:36:29 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	<unistd.h>
#include 	<stdio.h>

int		ft_iterative_factorial(int nb)
{
	if ( nb > 1)
	{
		return(nb * ft_iterative_factorial(nb - 1));
	}
	return nb;	
}


