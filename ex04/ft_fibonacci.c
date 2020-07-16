/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooverto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:44:53 by jooverto          #+#    #+#             */
/*   Updated: 2020/07/16 10:17:09 by jooverto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
	{
		return(-1);
	}
	if (index == 0)
	{
		return(0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
int			main()
{
	printf("%d",ft_fibonacci(6));
	return(0);
}
