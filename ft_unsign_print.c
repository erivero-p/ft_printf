/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsign_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:03:58 by erivero-          #+#    #+#             */
/*   Updated: 2023/05/01 12:49:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include "ft_printf.h"

/* int	ft_puchero(char c)
{
	write(1, &c, 1);
	return (1);
} */
int	ft_unsign_print(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_unsign_print(n / 10);
	ft_puchero((n % 10) + 48);
	count++;
	return (count);
}

/* #include <stdio.h>
int	main (void)
{
	unsigned int i = -11;
	printf("%i", ft_unsign_print(i));
}
 */