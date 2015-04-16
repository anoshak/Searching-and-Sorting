/*
 * Q7.cpp
 *
 *  Created on: Mar 10, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"
#include<algorithm>

class HtWt
{
public:
	int Ht;
	int Wt;
};

bool sortByHt(const HtWt &lhs, const HtWt &rhs)
{
	return (lhs.Ht < rhs.Ht) ;
}

vector<HtWt> getIncreasingSequence(vector<HtWt> &input)
{
	if(input.empty())
	{
		vector<HtWt> temp;
		return temp;
	}
	//First sort by Height
	sort(input.begin(),input.end(),sortByHt);

	//Find solution ending at each array index
	vector<HtWt> solutions[input.size()]; //Array of vectors

	int cur_index = 0;

	while(cur_index < input.size())
	{
		int max_index = -1;
		int max = 1;
		for(int i = cur_index - 1; i>=0 ; i--)
		{
			if(input[i].Wt <= input[cur_index].Wt && solutions[i].size() + 1 > max)
			{
				max = solutions[i].size() + 1;
				max_index = i;
			}
		}
		vector<HtWt> result;
		if(max_index!=-1)
		{
			result = solutions[max_index];
		}
		result.push_back(input[cur_index]);

		solutions[cur_index]= result;
		result.clear();
		cur_index++;

	}

/*	for(int i = 0; i< input.size(); i++)
	{
		for(int j=0 ; j<solutions[i].size(); j++)
			cout<< solutions[i][j].Wt <<" ";
		cout<<endl;
	}*/

	int max = solutions[0].size();
	int max_index = 0;
	int i;
	for(i= 1; i< input.size(); i++)
	{
		if(max < solutions[i].size())
		{
			max = solutions[0].size();
			max_index = i;
		}
	}

	return solutions[max_index];


}

int main()
{
	HtWt obj[9];
	obj[0].Ht = 1;
	obj[0].Wt = 10;
	obj[1].Ht = 2;
	obj[1].Wt = 22;
	obj[2].Ht = 3;
	obj[2].Wt = 9;
	obj[3].Ht = 4;
	obj[3].Wt = 33;
	obj[4].Ht = 5;
	obj[4].Wt = 21;
	obj[5].Ht = 6;
	obj[5].Wt = 50;
	obj[6].Ht = 7;
	obj[6].Wt = 41;
	obj[7].Ht = 8;
	obj[7].Wt = 60;
	obj[8].Ht = 9;
	obj[8].Wt = 80;

	vector<HtWt> input;
	for(int i = 0; i<9; i++)
		input.push_back(obj[i]);

	vector<HtWt> result = getIncreasingSequence(input);

	for(int i = 0; i<result.size() ; i++)
		cout<<result[i].Wt<<" ";

}




