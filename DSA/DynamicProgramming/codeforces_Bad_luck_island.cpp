#include<iostream>
#include<cstring>
#include<iomanip>
#define ld long double
using namespace std;
ld dp[105][105][105];
ld fr(int r,int p,int s){
	if(r==0 || s==0) return 0.0;
	if(p==0) return 1.0;
	if(dp[r][p][s]>-0.9) return dp[r][p][s];
	int total = r*p+p*s+s*r;
	ld result = 0.0;
	result+=((r*p*1.0)/total)*fr(r-1,p,s);
	result+=((p*s*1.0)/total)*fr(r,p-1,s);
	result+=((s*r*1.0)/total)*fr(r,p,s-1);
	return dp[r][p][s]=result;
}
ld fp(int r,int p,int s){
	if(p==0 || r==0) return 0.0;
	if(s==0) return 1.0;
	if(dp[r][p][s]>-0.9) return dp[r][p][s];
	int total = r*p+p*s+s*r;
	ld result = 0.0;
	result+=((r*p*1.0)/total)*fp(r-1,p,s);
	result+=((p*s*1.0)/total)*fp(r,p-1,s);
	result+=((s*r*1.0)/total)*fp(r,p,s-1);
	return dp[r][p][s]=result;
}
ld fs(int r,int p,int s){
	if(s==0 || p==0) return 0.0;
	if(r==0) return 1.0;
	if(dp[r][p][s]>-0.9) return dp[r][p][s];
	int total = r*p+p*s+s*r;
	ld result = 0.0;
	result+=((r*p*1.0)/total)*fs(r-1,p,s);
	result+=((p*s*1.0)/total)*fs(r,p-1,s);
	result+=((s*r*1.0)/total)*fs(r,p,s-1);
	return dp[r][p][s]=result;
}
int main(){
	int r,s,p;
	cin>>r>>s>>p;
	memset(dp,-1,sizeof(dp));
	cout<<fixed<<setprecision(12)<<fr(r,p,s)<<" ";
	memset(dp,-1,sizeof(dp));
	cout<<fixed<<setprecision(12)<<fs(r,p,s)<<" ";
	memset(dp,-1,sizeof(dp));
	cout<<fixed<<setprecision(12)<<fp(r,p,s);


}