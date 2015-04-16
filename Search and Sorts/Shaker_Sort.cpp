/*
 * Shaker_Sort.cpp

 *
 *  Created on: Mar 3, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"

void Shaker_Sort(int* arr, int n)
{
	bool exchanged = 1;
	for(int i=0;exchanged;i++)
	{
		exchanged = 0;
		for(int j=i;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				exchanged = 1;
			}
		}
		if(exchanged)
		{
			exchanged = 0;
			for(int j=n-2-i;j>=i+1;j--)
			{
				if(arr[j]<arr[j-1])
				{
					int temp= arr[j];
					arr[j]=arr[j-1];
					arr[j-1]=temp;
					exchanged = 1;
				}
			}
		}



	}
}

/*int main()
{
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	Shaker_Sort(arr,10);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	return 0;
}*/
