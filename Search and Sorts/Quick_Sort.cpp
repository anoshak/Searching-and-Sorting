/*
 * Quick_Sort.cpp
 *
 *  Created on: Mar 3, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"

int partition(int* arr, int low, int high)
{
	int pivot = arr[low];
	int i,j;
	for(i=low+1,j=high;i<=j;)
	{
		if(arr[i]<=pivot)
			i++;
		else
		{
			int temp= arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			j--;
		}
	}
	arr[low]=arr[i-1];
	arr[i-1]=pivot;
	return i-1;
}

void Quick_Sort(int* arr, int low, int high)
{
	if(low<high)
	{
	int pos = partition(arr,low,high);
	Quick_Sort(arr,low,pos-1);
	Quick_Sort(arr,pos+1,high);
	}

}
/*
int main()
{
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	Quick_Sort(arr,0,9);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	return 0;
}
*/



