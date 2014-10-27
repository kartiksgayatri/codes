#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
 int num,n,m,i,a[100005],temp=0;
 char ch;
 scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

i=0;
 while(m--)
 {
    scanf(" %c %d",&ch,&num);
    if(ch == 'C')
        i=(i+num)%n;
    if(ch == 'A')
    {
        num=n-num;
        i=(i+num)%n;
    }
    if(ch== 'R')
    {
        num--;
        temp=i;
        temp=(temp+num)%n;
        printf("%d\n",a[temp]);
    }
  }
 return 0;
}
