/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:07:53 by gbertoli          #+#    #+#             */
/*   Updated: 2026/02/24 15:03:12 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_char(va_list args);
int	print_string(va_list args);
int	print_pointer(va_list args);
int	print_decimal(va_list args);
int	print_int(va_list args);
int	print_unsigned_decimal(va_list args);
int	print_hexadecimal_lowercase(va_list args);
int	print_hexadecimal_uppercase(va_list args);
int	print_percent(va_list args);

#endif