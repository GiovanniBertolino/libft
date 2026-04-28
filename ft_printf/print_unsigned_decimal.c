/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_decimal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:10:27 by gbertoli          #+#    #+#             */
/*   Updated: 2026/02/24 15:03:27 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// calculate length of unsigned int
static int	len_unsigned_int(unsigned int n)
{
	int	len;

	len = 1;
	if (n == 0)
		return (1);
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// print unsigned int
static void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr_unsigned_fd(n / 10, fd);
	}
	c = (n % 10 + '0');
	ft_putchar_fd(c, fd);
}

// Function to print an unsigned decimal integer
int	print_unsigned_decimal(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	ft_putnbr_unsigned_fd(n, 1);
	return (len_unsigned_int(n));
}
