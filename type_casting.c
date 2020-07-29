/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   type_casting.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmcharra <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/19 12:49:35 by mmcharra      #+#    #+#                 */
/*   Updated: 2020/07/19 12:52:31 by mmcharra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     main()
{
    int eggs;
    printf("Enter number of eggs");
    scanf("%i", &eggs);
    double dozen = (double) eggs / 12;
    printf("you have %f dozen eggs.\n", dozen);
    return 0;
}
