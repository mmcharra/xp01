/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tab_pntr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 16:39:02 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/22 10:43:59 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ex1(void)
{
	int	tab[10];
	int *pntr;

	pntr = tab;
	*(pntr + 3) = 8342;
	printf("%d\n", tab[3]);
	printf("%p\n", pntr);
}

void ex2(void)
{
	int 	tab1[10];
	int		tab2[10];
	int		*tabp1[2];
	int		*tabp2[2];

	tab1[1] = 44;
	tabp1[0] = tab1;
	tabp1[1] = tab2;
	tabp1[1][3] = 42;

	printf("%dprintf *tab1 \n", *tab1);
	printf("tabpntr[1][3] = tab2[3] =  %d", tab2[3]);
	printf("\n");
	*(tabp1[1] +3) = 42;

	printf("tabpntr[1][3] = tab2[3] =  %d\n", tab2[3]);
	printf("\n");
	*(*(tabp1 + 1) + 3) = 42;

	printf("tabpntr[1][3] = tab2[3] =  %d\n", tab2[3]);
	printf("\n");
}

void ex3(void)
{
	int tab[4];
	int *ptab[2];

	tab[2] = 145;
	// addressing tab by ptab
	ptab[1] = tab;
	
	ptab[1][2] = 18;
	printf("%d \n", *(tab + 2));
	*(ptab[1] + 2) = 18;
	printf("%d \n", *(tab + 2));
	*(*(ptab + 1) + 2) = 18;
	printf("%d \n", *(tab + 2));

}
int main(void)
{
	ex3();
	return(0);
}
