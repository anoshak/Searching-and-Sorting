/*
 * Q2.cpp
 *
 *  Created on: Mar 9, 2015
 *      Author: Anoshak
 */

#include "Sorts.h"

#include<algorithm>

vector<string> sort_anagrams(vector<string> &s)
{
	//first sort each string and store in another vector
	vector<string> t;
	for(unsigned i = 0; i<s.size(); i++)
	{
		string temp = s[i];
		sort(temp.begin(),temp.end());
		t.push_back(temp);

	}

	map<string,vector<string> > mymap;

	for(int i=0; i<t.size(); i++)
	{
		if(mymap.find(t[i])==mymap.end())
		{
			vector<string> temp;
			temp.push_back(s[i]);
			mymap[t[i]] = temp;
		}
		else
		{
			vector<string> &temp = mymap[t[i]];
			temp.push_back(s[i]);
		}
	}

	map<string,vector<string> >::iterator itr;
	t.clear();

	for(itr=mymap.begin();itr!=mymap.end();itr++)
	{
		vector<string> temp = itr->second;
		for(int i=0;i<temp.size();i++)
			t.push_back(temp[i]);
	}

	return t;

}
/*

int main()
{
	vector<string> s;
	s.push_back("abc");
	s.push_back("def");
	s.push_back("bca");
	s.push_back("efg");
	s.push_back("fde");
	s.push_back("gfe");
	vector<string> result = sort_anagrams(s);
	for(int i=0;i<result.size();i++)
		cout<<result[i]<<" ";

}
*/



