/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal_lowercase.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:12:21 by gbertoli          #+#    #+#             */
/*   Updated: 2026/02/24 15:03:15 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// todo calculate length of hexadecimal number in lowercase
static int	calculate_length_hexadecimal(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr = nbr / 16;
		count++;
	}
	return (count);
}

// todo print_nbr_base to print in lowercase
static void	ft_putnbr_base_lowercase(unsigned int nbr, char *base)
{
	if (nbr >= 16)
		ft_putnbr_base_lowercase(nbr / 16, base);
	ft_putchar_fd(base[nbr % 16], 1);
}

// Function to print a hexadecimal number in lowercase
int	print_hexadecimal_lowercase(va_list args)
{
	unsigned int	nbr;

	nbr = va_arg(args, unsigned int);
	ft_putnbr_base_lowercase(nbr, "0123456789abcdef");
	return (calculate_length_hexadecimal(nbr));
}
