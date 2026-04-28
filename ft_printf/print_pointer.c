/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giovanni <giovanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 17:09:45 by gbertoli          #+#    #+#             */
/*   Updated: 2026/02/21 15:20:49 by giovanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_putstr_fd(const char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// todo calculate length of hexadecimal number in lowercase
static int	calculate_length_hexadecimal(unsigned long nbr)
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
static void	ft_putnbr_base_lowercase(unsigned long nbr, char *base)
{
	if (nbr >= 16)
		ft_putnbr_base_lowercase(nbr / 16, base);
	ft_putchar_fd(base[nbr % 16], 1);
}

// Function to print a pointer
int	print_pointer(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	if (!ptr)
	{
		ft_putstr_fd(("0x0"), 1);
		return (3);
	}
	ft_putstr_fd("0x", 1);
	ft_putnbr_base_lowercase((unsigned long)ptr, "0123456789abcdef");
	return (calculate_length_hexadecimal((unsigned long)ptr) + 2);
}
