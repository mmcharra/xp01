/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   int_pntr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 16:03:41 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/22 10:13:40 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int i1;
	int i2;
	char c_c;
	int *p1;
	int *p2;
	char *p_c_c;

	i1 = 47;
	p1 = &i1;
	p2 = &i2;
	p_c_c  = &c_c;

	
	printf("%i value of p1 pointer \t", *p1);
	printf("\n");
	printf("%p address of pointer p1 \t", p1);
	printf("\n");
	printf("%i value of p2 pointer \t", *p2);
	printf("\n");
	printf("%p address of pointer p2 \t", p2);

	printf("%i char value of c_c pointer is pointing to \t", *p_c_c);
	printf("\n");
	printf("%p address of pointer p_c_c \t", p_c_c);
	printf("\n");
	printf("%i value of p_c_c pointer is pointing to \t", *p_c_c);
	printf("\n");
	printf("%p address of pointer p_c_c \t", p_c_c);

	printf("\n");
printf("%p int p1 + 1 \t ", p1 + 1);
	printf("\n");
printf("%p int p1 + 2  \n", p1 + 2);

	printf("\n");
printf("%p int p2 + 1 \t ", p2 + 1);
	printf("\n");
printf("%p int p2 + 2  \n", p2 + 2);

	printf("\n");
printf("%p char pointer + 1 \t ", p_c_c + 1);
	printf("\n");
printf("%p char pointer + 2  \t", p_c_c + 2);
	printf("\n");

//printf("%i value of pnt+1 \n", *(p_c_c + 1));
	//printf("%i value of char pnt +2 \n", *(p_c_c + 2));


}
