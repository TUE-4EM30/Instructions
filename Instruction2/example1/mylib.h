//
// (c) Joris Remmers
//

#ifndef _MYLIB
#define _MYLIB

#include <stdio.h>
#include <stdlib.h>

#define MAX_GRADES 1000
#define HIST_ITEMS 12

int read_grades

    (char *filename,
     float *grades,
     int *studID);

void print_grades

    (float *grades,
     int *studID,
     int count);

float calc_average

    (float *grades,
     int count);

float calc_std_deviation

    (float *grades,
     int count);

void clear_histogram

    (int *hist);

int get_hist_item

    (float x);

void fill_histogram

    (float *grades,
     int *hist);

#endif
