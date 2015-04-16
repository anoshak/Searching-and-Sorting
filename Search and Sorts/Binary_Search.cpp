/*
 * Binary_Search.cpp

 *
 *  Created on: Mar 3, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"

int binsearch(int* arr, int n, int no)
{
	int low=0, high = n-1;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(arr[mid]==no)
			return mid;
		else if(no<arr[mid])
			high = mid-1;
		else low = mid+1;
	}
	return -1;
}

int binsearch_recursive(int* arr, int low, int high, int no)
{
	if(low>high)
		return -1;
	int mid = (low+high)/2;
	if(arr[mid]==no)
		return mid;
	else if(no<arr[mid])
		return binsearch_recursive(arr,low,mid-1,no);
	else return binsearch_recursive(arr,mid+1,high,no);
}

/*
int main()
{
	int arr[]={1,3,5,6,7,8,20};
	cout<<binsearch(arr,7,4)<<endl;
	cout<<binsearch_recursive(arr,0,6,5)<<endl;
	return 0;

}
*/
