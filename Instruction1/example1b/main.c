/****************************************************************************
 *                                                                          *
 * File    : main.c  part of: example1b                                     *
 *                                                                          *
 * Purpose : Sample program to demonstrate round off errors (double prec.)  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/01/10  Created by Joris Remmers                             *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

int main ( void )
{
	double  x = 1.0;
  	double  d = 0.1;

  	while ( x > 0.0 )
  	{
   		x = x - d;
    	printf( "%1.2f\n" , x );
  	}
}
