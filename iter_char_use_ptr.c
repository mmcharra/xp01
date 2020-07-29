/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter_char_use_ptr.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 13:52:33 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/25 15:23:20 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *sub)
{
	while (*str)
	{
		char *inner_str = str;
		while (*str && *sub && *str == *sub)
		{
			str++;
			sub++;
		}
		printf("\n%c > \t", *sub);
		if (!*sub)
		{
			return inner_str;
		}
		printf("\n%s >>> \t", str);
		str = str + 1;
	}
	return NULL;
}

int		main(void)
{
	char src[]= "Ceramics Buildings.";
	char sub[] = "icz";
	printf("%s",ft_strstr(src, sub));
}
