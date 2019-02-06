// Matrix Multiplication

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define SIZE 1000000

int main(){

	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,sum;
	int i,j,k;
	cout<<"Row 1: ";cin>>r1;
	cout<<"Coulumn 1: ";cin>>c1;
	cout<<"Row 2: ";cin>>r2;
	cout<<"Coulumn 2: ";cin>>c2;

	if(c1!=r2){
		cout<<"Invalid Matrix";
		return 0;
	}
	cout<<"Enter Elements for Matrix 1: \n";
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++)
			cin>>a[i][j];
	}
	cout<<"\nEnter Elements for Matrix 2: \n";
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++)
			cin>>b[i][j];
	}
	cout<<"\nProduct:\n";
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			sum=0;
			for(int k=0;k<c1;k++){
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++)
			cout<<c[i][j]<<" ";
		cout<<"\n";
	}

	return 0;
}
