/****************************************************************************
 *                                                                          *
 * File    : main.c  part of: example3test                                  *
 *                                                                          *
 * Purpose : Program to test the utility functions in mylib.c               *
 *           (part of example3)                                             *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/01/09  Created by Joris Remmers                             *
 *                                                                          *
 ****************************************************************************/


#include "../example1/mylib.h"

int main( void )

{
	float grades[MAX_GRADES];   // Array of grades
    int   studID[MAX_GRADES];   // Array of student ID numbers
    int   count;

    float average;              // Average

    FILE *of;

    of = fopen("test.log","r");

    // Series of tests for lijst1.dat

    count = read_grades( "../grades/lijst1.dat" , grades , studID );

    print_grades( grades , studID , count );

    average = calc_average( grades , count );

    fprintf(of,"The average grade should be : 4.5\n");
    fprintf(of,"The calculated average is   : %2.1f\n\n",average);

    // Series of tests for lijst2.dat

    count = read_grades( "../grades/lijst2.dat" , grades , studID );

    print_grades( grades , studID , count );

    average = calc_average( grades , count );

    fprintf(of,"The average grade should be : 5.5\n");
    fprintf(of,"The calculated average is   : %2.1f\n\n",average);

    // Series of tests for getHistItem function

    fprintf(of,"The value 5.6 should be in interval  : 6\n");
    fprintf(of,"The calculated interval is           : %d\n\n",get_hist_item(5.6));         

    fprintf(of,"The value 0.1 should be in interval  : 0\n");
    fprintf(of,"The calculated interval is           : %d\n\n",get_hist_item(0.1));         

    fprintf(of,"The value 10.0 should be in interval : 11\n");
    fprintf(of,"The calculated interval is           : %d\n\n",get_hist_item(10.0));        

    printf("Log file: test.log\n");
    return 0;
}
