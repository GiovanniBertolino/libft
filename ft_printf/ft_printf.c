/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 23:05:33 by gbertoli          #+#    #+#             */
/*   Updated: 2026/02/24 15:03:07 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// function who choose the correct print function based on format specifier
int	format_specifier(char c, va_list args)
{
	if (c == '\0')
		return (0);
	if (c == '%')
		return (print_percent(args));
	if (c == 'c')
		return (print_char(args));
	if (c == 's')
		return (print_string(args));
	if (c == 'p')
		return (print_pointer(args));
	if (c == 'd')
		return (print_decimal(args));
	if (c == 'i')
		return (print_int(args));
	if (c == 'u')
		return (print_unsigned_decimal(args));
	if (c == 'x')
		return (print_hexadecimal_lowercase(args));
	if (c == 'X')
		return (print_hexadecimal_uppercase(args));
	else
	{
		ft_putchar_fd(c, 1);
		return (1);
	}
}

// Main ft_printf function
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	if (!format)
		return (0);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				return (count);
			count += format_specifier(*format, args);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
