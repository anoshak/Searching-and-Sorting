/*
 * Bubble_Sort.cpp
 *
 *  Created on: Mar 3, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"

void classical_bubble_sort(int* arr, int n)
{
	for(int j=1;j<n;j++)
		for(int i=0;i<n-j;i++)
			if(arr[i]>arr[i+1])
			{
				int temp = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
}

/*
int main()
{
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	classical_bubble_sort(arr,10);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	return 0;
}
*/


