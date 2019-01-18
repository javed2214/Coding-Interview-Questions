// Program to Print all Possible Quadruplets of Target Sum

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

static int p=0;
std::vector< vector <int> > X;

void getAns(std::vector<int> &v, int no, int target){

	int i=0;
	int a[4],j=0;
	while(no){
		if(no&1)
			a[j++]=v[i];
		i++;
		no>>=1;
	}
	int sum=0;
	for(int i=0;i<4;i++)
		sum+=a[i];
	if(sum==target){
		for(int i=0;i<4;i++)
			cout<<a[i]<<" ";
	cout<<"\n";
	}
}

void bitMask(std::vector<int> &v, int target){

	int s=v.size();
	int range=(1<<s)-1;
	for(int i=1;i<=range;i++){
		if(__builtin_popcount(i)==4)
			getAns(v,i,target);
	}
}

int main(){

	std::vector<int> v={1,2,3,4,5,6,7,8,9};
	int target=15;
	bitMask(v,target);

	return 0;
}