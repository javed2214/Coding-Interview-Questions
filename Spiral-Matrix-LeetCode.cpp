// Spiral Matrix - LeetCode
// https://leetcode.com/problems/spiral-matrix/

#include<bits/stdc++.h>
using namespace std;

vector <int> spiralMtrix(vector <vector<int>> &v){

	vector <int> x;

	if(v.size() == 0) return x;

	int rowBegin = 0;
	int rowEnd = v.size() - 1;
	int colBegin = 0;
	int colEnd = v[0].size() - 1;

	while(rowBegin <= rowEnd and colBegin <= colEnd){

		for(int i=colBegin;i<=colEnd;i++)
			x.push_back(v[rowBegin][i]);

		rowBegin++;

		for(int i=rowBegin;i<=rowEnd;i++)
			x.push_back(v[i][colEnd]);

		colEnd--;

		if(rowBegin <= rowEnd){
			for(int i=colEnd;i>=colBegin;i--)
				x.push_back(v[rowEnd][i]);
		}

		rowEnd--;

		if(colBegin <= colEnd){
			for(int i=rowEnd;i>=rowBegin;i--)
				x.push_back(v[i][colBegin]);
		}

		colBegin++;
	}

	return x;
}

int main(){

	vector <vector<int>> v = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};

	vector <int> x;
	
	x = spiralMtrix(v);

	for(auto it:x) cout<<it<<" ";

	return 0;
}