// https://www.codechef.com/problems/CHEFGR

#include<stdio.h>
#include<math.h>
#define MOD 1000000007
#define ll long long int
#define SIZE 100001

int main(){

	int test;
	scanf("%d",&test);
	while(test--){
		int n,k;
		int a[101];
		scanf("%d %d",&n,&k);
		int sum=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		sum+=k;
		if(sum%n==0) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}
