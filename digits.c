/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:17:21 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/30 15:47:14 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void print_base(long long int num, int base, int *count, int mayus)
{
	if (num < 0)
	{
		num *= -1;
		*count += write(1, "-", 1);
	}
	if (num >= base)
		print_base(num / base, base, count, mayus);
	if (mayus)
		*count += print_char("0123456789ABCDEF"[num % base]);
	else
		*count += print_char("0123456789abcdef"[num % base]);
}

void	print_ptr(unsigned long long ptr, int *count)
{
	print_str("0x", count);
	print_base((long long int)ptr, 16, count, 0);
}
