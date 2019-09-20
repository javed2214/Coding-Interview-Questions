// Merging Overlapping Intervals
// https://www.techiedelight.com/merging-overlapping-intervals/

#include<bits/stdc++.h>
using namespace std;

void mergeIntervals(vector <pair<int,int>> &v){

	sort(v.begin(), v.end());

	stack <pair<int,int>> S;

	for(auto it:v){
		if(S.empty() or S.top().second < it.first) S.push(it);
		if(S.top().second < it.second) S.top().second = it.second;
	}

	while(!S.empty()){
		pair <int,int> P = S.top();
		cout<<"["<<P.first<<","<<P.second<<"] ";
		S.pop();
	}
	return;
}

int main(){

	vector <pair<int,int>> v = {
		{1,3},{2,4},{9,12},{6,7},{4,6},{14,17}
	};

	mergeIntervals(v);

	return 0;
}