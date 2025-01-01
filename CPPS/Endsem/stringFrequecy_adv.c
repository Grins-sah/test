#include<stdio.h>
#include<string.h>
void frequency(char str[],int size,int freq){
    int visited [size];
    int k = 0;
    for(int i=0;i<size;i++){
        int flag = 0;
        for(int j=0;j<k;j++){
            if(visited[j]==str[i]){
                flag = 1;
                break;
            }
        }
        if(flag) continue;
        int count = 0;
        visited[k++] = str[i];
        for(int j = 0;j<size;j++){
            if(str[i]==str[j]) count++;
        }
        if(count == freq)printf("The Frequency if %c is %d \n",str[i],count);

    }
}
int main(){
    frequency("grinssahbg",10,1);


}