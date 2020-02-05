/****************************************************************************
 *                                                                          *
 * File    : mylib.c  part of: example1                                     *
 *                                                                          *
 * Purpose : Utility functions                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/01/09  Created by Joris Remmers                             *
 *                                                                          *
 ****************************************************************************/

#include "mylib.h"
#include <math.h>

//---------------------------------------------------------------------
//  This function reads the student ID numbers and the corresponding
//  grades from an ASCII text file with the name [filename].
//  The routine checks is the student ID number is a valid number
//  (i.e. studentID > 1000000) and if the grade is between 0. and 10.0
//  
//  Arguments: filename   filename (with relative path)
//             grades     list of grades
//             studID     list of student IDs
//
//  Returns:   number of students in list
//---------------------------------------------------------------------

int read_grades

	( char*         filename ,
	  float*        grades   ,
	  int*          studID   )

{
	int   sID;          // Student ID number
	float grad;         // grade
	int   count = 0;    // counter

	FILE *gradlist;     // input file

	printf("df %s\n",filename);

	if (( gradlist=fopen( filename , "r" )) == NULL )
	{
		printf("Cannot open file %s\n",filename );
		return 0;
	}
	
	while( fscanf(gradlist,"%d %e",&sID,&grad) != EOF )
    {
		if (sID < 1000000 )
		{
			printf("Not a valid Student ID number : %d\n",sID);
			return 0;
		}

		if ( !(grad > 0. && grad < 10.0 ) )
		{
			printf("Student number %d has an invalid score : %e\n",sID,grad);
			return 0;
		}
 
		studID[count] = sID;
        grades[count] = grad;

		count++;

		if ( count == MAX_GRADES )
		{
			printf("Too many scores in the list\n");

			return count;
		}
	}

	return count;
}


//---------------------------------------------------------------------
//  Prints the student ID numbers and the grades to
//  the screen.
//  arguments:    grades   array containing grades
//                studID   array containing student IDs
//                count    number of grades to be printed
//---------------------------------------------------------------------


void print_grades  

	( float*     grades ,
	  int*       studID ,
      int        count  )

{
	int i;

	for ( i = 0 ; i < count ; i++ )
	{
		printf("%d : %3.1f\n",studID[i],grades[i]);
	}

	if ( count = 0 )
	{
		printf("The list is empty\n\n");
	}
	else if( count == 1 )
	{
		printf("The list contains 1 grade\n\n");
	}
	else
	{
		printf("The list contains %d grades\n\n",count);
	}
}


//---------------------------------------------------------------------
//  Calculates the average of a list of float
//  arguments:      x      list of floats
//                  count  number of items
//  requirements:   count > 0
//---------------------------------------------------------------------


float calc_average

	( float*     grades ,
      int        count  )

{
	float  sum = 0.0; 
	float  average;	
	int    i;

	if ( count == 0 )
	{
		printf("Number of items equals zero\n");
		return 0.;	
	}

	for ( i = 0 ; i < count ; i++ );
	{
		sum = sum + grades[i];
	}

	average = sum / count;

	return average;
}


//---------------------------------------------------------------------
//  To be completed by the student
//---------------------------------------------------------------------


float calc_std_deviation

	( float*     grades ,
      int        count  );

{
	// To be completed by the student

	return 0.;
}


//---------------------------------------------------------------------
//  Clears the contents of the histogram hist
//---------------------------------------------------------------------


void clear_histogram

	( int*        hist )

{
	int i;

	for ( i = 0 ; i < HIST_ITEMS ; i++ )
	{
		hist[i] = 0;
	}



//---------------------------------------------------------------------
// Determines the position in the histogram of a value x.
// The histogram has 12 intervals:
//
// 0  : the values 0.0-0.5
// 1  : the values 0.5-1.5
// ....
// 10 : the values 9.5-9.9
// 11 : the value  10.0
//---------------------------------------------------------------------


int get_hist_item

	( float    x )

{
	if ( x > 9.99 ) return 11;

	return round(x);
}


//---------------------------------------------------------------------
//  To be completed by the student
//---------------------------------------------------------------------


void fill_histogram

	( float*           grades ,
	  int*             hist   )

{
	//To be completed by the student
}

