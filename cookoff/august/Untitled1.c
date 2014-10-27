#include<stdio.h>
unsigned long arr[32][22];
int doller(unsigned int N,unsigned int i, unsigned int j) {
if(N<12) return N;
if(arr[i][j]==0) {
            arr[i][j] = doller(N/2,i+1,j) + doller(N/3,i,j+1) + doller(N/4,i+2,j);
       }
return arr[i][j];
}

int main() {
unsigned int N;
int i=0,j=0;
while(scanf("%u",&N)!=EOF){
for(i=0;i<32;i++)
for(j=0;j<22;j++)
arr[i][j]=0;
    printf("%u\n",doller(N,0,0));
}
}
