/****************************************************************************
 *                                                                          *
 * File    : main.c  part of: example2b                                     *
 *                                                                          *
 * Purpose : Simple program that calculates the coins in which a certain    *
 *           amount can be broken down.                                     *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/01/10  Created by Joris Remmers (as example2a)              *
 *           23/01/10  Adding data structure (JR)                           *
 *           23/01/10  Creating functions and mylib.h                       *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include "mylib.h"

int main ( void )
{
	Coin coins[10];
 	int amount;
	int n;

	n = init( coins );

	amount = read();	
    
	split( amount , coins );

    report( amount , coins , n );

  	return 0;
}
