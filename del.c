/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   del.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 09:03:36 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/21 10:18:50 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(void)
{
	ft_putstr("Waar is de coffee?");
	ft_putchar('\n');
	return (0);
}
