	#include <iostream>
	#include<vector>
	#include<algorithm>
	using namespace std;
	
	int main() {
		int t;
		cin>> t;
		for(int k=0;k<t;k++){
			int m,n;
			cin>>m>>n;
			vector<int> v1;
			for(int i=0;i<m-1;i++){
				int x;
				cin>>x;
				v1.push_back(x);
			}
			vector<int> v2;
	
			for(int i=0;i<n-1;i++){
				int x;
				cin>>x;
				v2.push_back(x);
			}
			int i = 0;
			int j = 0;
			int xCut = 1;
			int yCut = 1;
			sort(v1.begin(),v1.end());
			sort(v2.begin(),v2.end());
				reverse(v1.begin(),v1.end());
			reverse(v2.begin(),v2.end());
			int result = 0;
			while(i<m-1 || j<n-1){
				if(m>n){
				if(j<n-1 && i<m-1 && v2[j]>=v1[i]){
					result += v2[j]*xCut;
					j++;
					yCut++;
				}else if(j<n-1 && i<m-1 &&v1[i]>v2[j]){
					result+= v1[i]*yCut;
					xCut++;
					i++;
				}else if(j<n-1){
					result += v2[j]*xCut;
					j++;
					yCut++;
					
				}
				else if(i<m-1){
					result+= v1[i]*yCut;
					xCut++;
					i++;
				}
			}else{
				if(j<n-1 && i<m-1 && v1[i]>=v2[j]){
					result += v1[i]*yCut;
					i++;
					xCut++;
				}else if(j<n-1 && i<m-1 &&v1[i]<v2[j]){
					result += v2[j]*xCut;
					j++;
					yCut++;
				}else if(j<n-1){
					result += v2[j]*xCut;
					j++;
					yCut++;
					
				}
				else if(i<m-1){
					result+= v1[i]*yCut;
					xCut++;
					i++;
				}
				
			}
			}			
			cout<<result;
	
			
		}
		// your code here
	
		return 0;
	}