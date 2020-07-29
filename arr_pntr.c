/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pntr_arr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 12:29:43 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/21 14:09:38 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char as[7] = "Merci";
	char *ptr = as;

	while (*ptr != '\0')
	{
		write(1, &*ptr, 1);
		ptr++;
	}
return (0);
}
