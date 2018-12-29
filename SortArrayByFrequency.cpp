// Program to Sort the Array on the Basis of Frequency

#include<bits/stdc++.h>
using namespace std;

bool compare(pair <int,int> &P1, pair <int,int> &P2){

	if(P1.second == P2.second)
		return false;
	if(P1.second > P2.second)
		return false;
	return true;
}

void sortArray(int *a, int n){
	map <int,int> M;
	for(int i=0;i<n;i++)
		M[a[i]]++;
	
	map <int,int>::iterator ptr=M.begin();
	
	while(ptr!=M.end()){
		cout<<ptr->first<<" : "<<ptr->second<<"\n";
		ptr++;
	}
	cout<<"\n";
	int size=M.size();
	ptr=M.begin();
	pair <int,int> P[size];
	for(int i=0;i<size;i++){
		P[i]=make_pair(ptr->first, ptr->second);
		ptr++;
	}
	int i=0;
	sort(P,P+size,compare);

	for(int i=0;i<size;i++){
		int freq=P[i].second;
		while(freq--)	
			cout<<P[i].first<<" ";
	}
}

int main(){
	int a[]={1,2,3,2,1,1,2,3,4,2,1,3,4,5,6,6,7,3,4,5,6,8,6,2};
	int n=sizeof(a)/sizeof(int);

	sortArray(a,n);
	cout<<"\n";

	return 0;
}
