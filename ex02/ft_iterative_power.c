/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:33:38 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/15 11:37:07 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int     ft_iterative_power(int nbr, int power)
{
	int		result;

	result = 1;
	
	if(power <= 0)
	{
		return(0);
	}

	while(power != 0)
	{
		result = result * nbr;
		--power;
	}	
	return(result);
}

int     main()
{
 	printf("%d",ft_iterative_power(3 , 3));
    return(0);   
}
