/****************************************************************************
 *                                                                          *
 * File    : main.c  part of: example2a                                     *
 *                                                                          *
 * Purpose : Simple program that calculates the coins in which a certain    *
 *           amount of money can be broken down.                            *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/01/10  Created by Joris Remmers                             *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

int main ( void )
{
	int coins[6] = {200,100,50,20,10,5}; //Only 5,10,20 and 50 cent coins, 1 and 2 euro coins
  	int count[6] = {0};	                 //Counter for each type of coin

 	int amount;                          //total amount of money
 	int current;                         //current amount

	printf("Enter the amount in Eurocents : ");
	scanf("%d",&amount);	

	current = amount;                    //set total to current
    
	int i = 0;

  	while( current > 0 )
  	{ 
   		if ( current >= coins[i] )
    	{
      		count[i] = count[i] + 1;
      		current  = current - coins[i]; 
    	}
    	else
    	{
      		i = i+1;
    	}
  	}

  	printf("The sum of %i cents, can be paid using the following coins\n",amount);

  	for ( i = 0 ; i < 6 ; i++ )
  	{
  	  	printf("%i coins of %i cent\n",count[i],coins[i]);
  	}

  	return 0;
}
