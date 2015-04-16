/*
 * Insertion_Sort.cpp
 *
 *  Created on: Mar 3, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"

void Insertion_Sort(int* arr, int n)
{
	for(int i=1;i<n;i++)
	{
		int element = arr[i];
		int j;
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]>element)
			{
				arr[j+1]=arr[j];
			}
			else break;
		}
		arr[j+1]=element;
	}
}

/*
int main()
{
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	Insertion_Sort(arr,10);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	return 0;
}

*/
