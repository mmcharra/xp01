/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pntr_str.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 14:01:51 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/20 16:16:52 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(void)
{
	char str1[] = "Hello";

	ft_putstr(str1);
	ft_putchar('\n');
	return 0;
}
