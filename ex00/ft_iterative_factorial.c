/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:38:44 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/16 09:04:53 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		x;
	int		result;

	result = 1;	
	x = 1;

	while( x <= nb)
	{
		result = result * x;
		x++;
	}
	 i
	return(result);	

}

int		main()
{
	printf("%d",ft_iterative_factorial(4));
	return(0);
}


