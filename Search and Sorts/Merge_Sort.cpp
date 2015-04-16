/*
 * Merge_Sort.cpp
 *
 *  Created on: Mar 3, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"

void Merge_Sort(int* arr, int low, int high)
{
	if(low>=high)
		return;
	int mid = (low+high)/2;
	Merge_Sort(arr,low,mid);
	Merge_Sort(arr,mid+1,high);

	//Merge Step
	int n = high - low + 1;
	int *temp = new int[n];
	int i=0, j=low,k=mid+1 ;
	while(j<=mid && k<=high)
	{
		if(arr[j]<arr[k])
			temp[i++]=arr[j++];
		else temp[i++]=arr[k++];
	}
	while(j<=mid)
		temp[i++]=arr[j++];
	while(k<=high)
		temp[i++]=arr[k++];

	for(int i=low,j=0;i<=high;i++,j++)
		arr[i]=temp[j];

	delete[] temp;


}

/*
int main()
{
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	Merge_Sort(arr,0,9);
	for(int i=0;i<10;i++)
		cout<<arr[i]<<" ";
	return 0;
}

*/


