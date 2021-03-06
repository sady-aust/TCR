/* interval compression! (sometimes called sweepline) */

#include <stdio.h>
#include <stdlib.h>

/* given an array of values, "compress" the array by sorting it
   and keeping only unique values. also, provide a way to get the
   index in the new array, given an old value */

/* compare two integers (quicksort) */
int compi(const void *A,const void *B) {
	int *a=(int *)A,*b=(int *)B;
	if(*a<*b) return -1;
	if(*a>*b) return 1;
	return 0;
}

/* given a number in the original array, return its index in the
   compressed array. if not found, return index to lowest number higher
   than val. *a must contain a value >val!
   val:  value to search for
   *a:   array with sweep-line valyes
   n:    size of *a */
/* NB, caller must take care when element doesn't exist. */
/* OK POJ 2637 (NCPC 2005 F "worst weather ever") 04.09.2011 */
int getindex(int val,int *a,int n) {
	int lo=0,hi=n,mid;
	while(lo!=hi) {
		mid=lo+(hi-lo)/2;
		if(a[mid]<val) lo=mid+1;
		else hi=mid;
	}
	return lo;
}

/* interval compression (sweepline) */
/* *a: array of n elements featuring our values
   these values are sorted, and duplicated are removed in-place.
   the number of unique values is returned. */
/* OK SPOJ 3465 DRIVE (NEERC 2008 D) 16.08.2011 */
/* OK POJ 2637 (NCPC 2005 F "worst weather ever") 04.09.2011 */
int intervalcompress(int *a,int n) {
	int nn=1,i;
	qsort(a,n,sizeof(int),compi);
	for(i=1;i<n;i++) if(a[i]>a[i-1]) a[nn++]=a[i];
	return nn;
}
