/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:36:24 by erivero-          #+#    #+#             */
/*   Updated: 2023/05/01 12:54:26 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>

int	ft_printf(char const *cnt, ...);
int	ft_puchero(char c);
int	ft_str_print(char *str);
int	ft_unsign_print(unsigned int n);
int	ft_int_print(int n);
int	ft_hexa_print(unsigned long long n, char c);
int	ft_ptr_print(unsigned long long ptr);
#endif