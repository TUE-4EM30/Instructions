/****************************************************************************
 *                                                                          *
 * File    : main.c  part of: example2b                                     *
 *                                                                          *
 * Purpose : Simple program that generates random numbers                   *
 *           using a seed that is based on the wall clock                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           25/01/10  Created by Joris Remmers                             *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void )
{
	int i;
	int x;

	printf("A small program that generates 5 random numbers between 0 and %d.\n",RAND_MAX);

	srand(time(0));

	for( i = 1 ; i < 6 ; i++ )
	{
		x = rand();

		printf("%d Generated: %d\n",i,x);
	}

}


