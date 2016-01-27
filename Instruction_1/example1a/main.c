/****************************************************************************
 *                                                                          *
 * File    : main.c  part of: example1a                                     *
 *                                                                          *
 * Purpose : Sample program to demonstrate round off errors (single prec.)  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/01/10  Created by Joris Remmers                             *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

int main ( void )
{
  float  x = 1.0;
  float  d = 0.1;

  while ( x > 0.0 )
  {
    x = x - d;
    printf( "%1.2f\n" , x );
  }
}

