/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:36:24 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/30 15:34:53 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>

int	ft_printf(char const *cnt, ...);
int		print_char(char c);
void	print_str(char *str, int *count);
void	print_base(long long int num, int base, int *count, int mayus);
void	print_ptr(unsigned long long ptr, int *count);


#endif