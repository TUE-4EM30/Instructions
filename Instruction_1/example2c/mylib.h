#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int      count;
	int      value;
	char     *name;
} Coin;

int init

	( Coin* coins );

void reset
	
	( Coin* coins ,
	  int	 n     );


int read ( void );

void split

	( int     amount ,
	  Coin*   coins  );


void report

	( int     amount ,
	  Coin*   coins  ,
	  int     n      );
