#include<iostream>
#include<cstdio>
using namespace std;
char a[1000001],b[1000001];
int main()
{
    long i,j,n,a1[27]={0},b1[27]={0},flag=0,len=0;
    cin>>n;
    i=n;
    while(i--)
    {
        a[i]=getchar();
        a1[a[i]]++;
    }
    i=n;
    while(i--)
    {
        b[i]=getchar();
        b1[b[i]]++;
    }
    for(i=0;i<26;i++)
    {
        if(a1[i]==b1[i])
            flag++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])

    }
    return 0;
}
