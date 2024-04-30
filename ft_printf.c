/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:37:50 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/30 15:57:44 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

void	ft_filter(char const *fix, int i, va_list *arg, int *count)
{
	if (fix[i] == 'c')
		*count += print_char(va_arg(*arg, int));
	if (fix[i] == 's')
		print_str(va_arg(*arg, char *), count);
	if (fix[i] == 'u')
		print_base((long long int)va_arg(*arg, unsigned int), 10, count, 0);
	if (fix[i] == 'i')
		print_base((long long int)va_arg(*arg, int), 10, count, 0);
	if (fix[i] == 'd')
		print_base((long long int)va_arg(*arg, int), 10, count, 0);
	if (fix[i] == 'x')
		print_base((long long int)va_arg(*arg, unsigned int), 16, count, 0);
	if (fix[i] == 'X')
		print_base((long long int)va_arg(*arg, unsigned int), 16, count, 1);
	if (fix[i] == 'p')
		print_ptr(va_arg(*arg, unsigned long long),count);
	if (fix[i] == '%')
		*count += print_char('%');
}

int	ft_printf(char const *fix, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = 0;
	count = 0;
	va_start(arg, fix);
	while (fix[i])
	{
		if (fix[i] != '%')
			count += print_char(fix[i]);
		else
		{
			i++;
			ft_filter(fix, i, &arg, &count);
		}
		i++;
	}
	va_end(arg);
	return (count);
}

/* #include <stdio.h>
int main()
{
	int ret_printf, ret_ft_printf;

	ret_printf = printf("%c %s %p %d %i %u %x %X %%\n", 'A', "Hello", (void *)123, 123, -456, 789, 255, 255);
	ret_ft_printf = ft_printf("%c %s %p %d %i %u %x %X %%\n", 'A', "Hello", (void *)123, 123, -456, 789, 255, 255);

	printf("Return value of printf: %d\n", ret_printf);
	printf("Return value of ft_printf: %d\n", ret_ft_printf);
	return (0);
} */
