
#include "foo.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int foo(int a,int b){
	return a-b-1;
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void sort(void *base, int nitems, int size)
{
    qsort(base, nitems, size, cmpfunc);
}
