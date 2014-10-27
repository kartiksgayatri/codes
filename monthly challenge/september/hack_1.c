#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,a[101]={0},i,cnt,sum,cnt1;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        cnt=0;
        cnt1=0;
        sum=0;
        i=0;
        while((ch=getchar())!='\n')
        {
            if(isdigit(ch))
                a[i]=atoi(ch);
            i++;
            cnt++;
            sum=sum+a[i];
        }
        sum=sum/cnt;
        for(i=0;i<cnt;i++)
            if(a[i]>sum)
                cnt1++;
        printf("%d\n",cnt);
    }
    return 0;
}

