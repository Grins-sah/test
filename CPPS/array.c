int main(){
	int n;
	scanf("%d",&n);
	char visit [n];
	char arr[n];
	for(int i=0;i<n;i++){
		scanf("\n%c",&arr[i]);
	}
	int j =0;
	for(int i=0;i<n;i++){
		char x = arr[i];
		int y= 1;
		for(int k=0;k<j;k++){
			if(visit[k]== x){
				y=0;
				break;
			}
		}		
		if(y!=0){visit[j]=x;
		j++;
		int count=0;
		for(int i=0;i<n;i++){
			if(arr[i]==x) count++;
		}
		printf("The Frequency of %c is %d\n",x,count);
	}}
	return 0;
}