/****************************************************************************
 *                                                                          *
 * File    : main.c  part of: example2b                                     *
 *                                                                          *
 * Purpose : Simple program that calculates the coins in which a certain    *
 *           amount of money can be broken down.                            *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/01/10  Created by Joris Remmers (as example2a)              *
 *           23/01/10  Adding data structure (JR)                           *
 *           23/01/10  Creating functions and mylib.h (JR)                  *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include "mylib.h"

int main ( void )
{
	int coins[6] = {200,100,50,20,10,5}; //Only 5,10,20 and 50 cent coins, 1 and 2 euro coins
  	int count[6] = {0};	                 //Counter for each type of coin

 	int amount;                          //total amount of money

	amount = read();	
    
	split( amount , count , coins );

    report( amount , count , coins , 6 );

  	return 0;
}


