/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   argc_argv.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <mmcharra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/24 15:33:14 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/28 12:39:42 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/* argc is the count of the variables of argv */
/*argv is array of character STRING */
/*	char archar[] = {'a','b', 'c', 'd', 'e', 'f'}; */
/*	char arstring[]= {'a', 'b', 'c', 'd', 'e', '\0'}; */

int	fc_strcmpr(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1 && *str2)
	{
		str1++;
		str2++;
	}
	if (*str1 == '\0' && *str2 == '\0')
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int main(int argc, char *argv[])
{
	int cycle;

	cycle = 1;
	while (argc > 1)
	{
		printf("arg[%d] = %s >> \n",cycle, argv[cycle]);
		if (fc_strcmpr(argv[cycle], "456") == 1)
			printf("hey %s\n", argv[cycle]);
		
		cycle++;
		argc--;
	}
	return (0);
}