/*
 * Selection_Sort.cpp
 *
 *  Created on: Mar 3, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"

void Selection_Sort(int* arr, int n)
{
	for(int i=0;i<n-1;i++)
	{
		int index = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[index])
			{
				index =j;
			}
		}
		if(index!=i)
		{
			int temp = arr[index];
			arr[index]=arr[i];
			arr[i]=temp;
		}
	}
}

/*int main()
{
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	Selection_Sort(arr,10);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	return 0;
}*/



