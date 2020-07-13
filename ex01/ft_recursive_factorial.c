/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:02:17 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/13 13:58:06 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int		ft_recursive_factorial(int nb)
{
	if (nb > 1)
	{
		return(nb * ft_recursive_factorial(nb - 1));
	}
	return(0);
}
