/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 10:53:19 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/30 15:26:28 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

void	print_str(char *str, int *count)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		*count += print_char(*str);
		str++;
	}
}