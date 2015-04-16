/*
 * Q1.cpp
 *
 *  Created on: Mar 9, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"

void merge(int* A, int* B, int na, int nb)
{
	int i,j,k;
	for(i=na-1,j=nb-1,k=na+nb-1; i>=0 && j>=0;)
	{
		if(A[i]>B[j])
			A[k--]=A[i--];
		else A[k--] = B[j--];
	}
	while(j>=0)
		A[k--] = B [j--];

}

/*
int main()
{
	int* A = new int[10];
	for(int i=0 ; i<5; i++)
		A[i] = (i+1)*2;

	int B[] = {1,3,5,7,9};

	merge(A,B,5,5);

	for(int i =0; i<10; i++)
		cout<<A[i]<" ";
}
*/
