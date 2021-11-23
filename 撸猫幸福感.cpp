#include<bits/stdc++.h>
using namespace std;
const long long nums=1e6+10;
long long a[nums];
long long dp[nums];
int main(){
	fill(a,a+nums,0);
	memset(dp,0,sizeof(dp));
	long long cnt=1;
	while(cin>>a[cnt]){
		cnt++;
	}
	cnt--;
	dp[0]=0;
	dp[1]=a[1];
	for(long long i=2;i<=cnt;i++){
		dp[i]=max(dp[i-2]+a[i],dp[i-1]);
	}
	cout<<dp[cnt]<<endl;
	return 0;
} 
