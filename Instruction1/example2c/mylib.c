#include "mylib.h"


//----------------------------------------------------------
//  Initialises coin list
//  
//  Arg. coins      coin list
//
//  Returns: number of coins in the list
//   
//----------------------------------------------------------

int init

	( Coin* coins )

{
	int n = 6;

	coins[0].value = 200;
	coins[1].value = 100;
	coins[2].value = 50;
	coins[3].value = 20;
	coins[4].value = 10;
	coins[5].value = 5;

	coins[0].name = "2 Euro";
	coins[1].name = "1 Euro";
	coins[2].name = "50 cent";
	coins[3].name = "20 cent";
	coins[4].name = "10 cent";
	coins[5].name = "5 cent";

	reset( coins , n );

	return n;
}


//----------------------------------------------------------
//  Set coin counters to zero
//  
//  Arg. coins      coin list
//       n          number of coin types
//   
//----------------------------------------------------------

void reset
	
	( Coin* coins ,
	  int	 n     )

{
	int i;

	for ( i = 0 ; i < n ; i++ )
	{
		coins[i].count = 0;
	}
}
	
//----------------------------------------------------------
//  Reads amount of money to be splitted
//
//  Returns: amount of money
//   
//----------------------------------------------------------

int read( void )

{
	int amount;

	printf("Enter the amount in Eurocents : ");
	scanf("%d",&amount);

	return amount;
}


//----------------------------------------------------------
//  Splits the amount of money in number of different coins
//  
//  Arg.  amount     amount of money
//        coins      coin list
//   
//----------------------------------------------------------

void split

	( int     amount ,
	  Coin*   coins  )

{	
	int i = 0;

  	while( amount > 0 )
  	{ 
   		if ( amount >= coins[i].value )
    	{
      		coins[i].count = coins[i].count + 1;
      		amount   = amount - coins[i].value;
    	}
    	else
    	{
      		i = i+1;
    	}
  	}
}


//----------------------------------------------------------
//  Writes a report of the algorithm to the screen
//  
//  Arg. amount     amount of money
//       coins      coin list
//       n          number of coin types
//   
//----------------------------------------------------------

void report

	( int     amount ,
	  Coin*   coins  ,
	  int     n      )

{
	int i;

	printf("The sum of %i cents, can be paid using the following coins\n",amount);

  	for ( i = 0 ; i < n ; i++ )
  	{
  	  	printf("%i coins of %s\n",coins[i].count,coins[i].name);
  	}
}
