/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:09:49 by gbertoli          #+#    #+#             */
/*   Updated: 2026/02/24 15:03:17 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = (n % 10 + '0');
	write(fd, &c, 1);
}

// function who calculate length of int
static int	len_int(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb <= 0)
		len++;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

// Function to print a decimal integer
int	print_decimal(va_list args)
{
	int	n;

	n = va_arg(args, int);
	ft_putnbr_fd(n, 1);
	return (len_int(n));
}
