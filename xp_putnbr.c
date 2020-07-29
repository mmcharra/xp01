/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   xp_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/19 12:49:35 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/27 11:35:12 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int     main(void)
{
	int num;
	num = 0;
	ft_putnbr(num);
	return (0);
}
