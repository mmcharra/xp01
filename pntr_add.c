/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pntr_add.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 12:04:13 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/21 12:10:06 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int first, second, *p, *q, sum;
	scanf("%d%d", &first, &second);

	p = &first;
	q = &second;

	sum  = *p + *q;

	printf("sum of tthe numbers = %d\n", sum);
	return 0;
}


