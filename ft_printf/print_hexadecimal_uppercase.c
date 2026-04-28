/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal_uppercase.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:12:38 by gbertoli          #+#    #+#             */
/*   Updated: 2025/12/05 17:36:58 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// todo calculate length of hexadecimal number in uppercase
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

// todo print_nbr_base to print in uppercase
static void	ft_putnbr_base_uppercase(unsigned int nbr, char *base)
{
	if (nbr >= 16)
		ft_putnbr_base_uppercase(nbr / 16, base);
	ft_putchar_fd(base[nbr % 16], 1);
}

// Function to print a hexadecimal number in uppercase
int	print_hexadecimal_uppercase(va_list args)
{
	unsigned int	nbr;

	nbr = va_arg(args, unsigned int);
	ft_putnbr_base_uppercase(nbr, "0123456789ABCDEF");
	return (calculate_length_hexadecimal(nbr));
}
