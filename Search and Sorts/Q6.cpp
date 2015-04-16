/*
 * Q6.cpp
 *
 *  Created on: Mar 9, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"

bool search(int (*mat)[4], int m, int n, int val)
{
	int row =0, col = n-1;
	while(row < m && col>=0)
	{
	if(mat[row][col]==val)
		return 1;
	else if(val < mat[row][col])
	{
		col--;
	}
	else row++;

	}
	return 0;
}

/*
int main()
{
	int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	cout<<search(arr,3,4,13);
	return 0;
}
*/
