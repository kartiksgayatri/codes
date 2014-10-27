#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
long long power(long long a)
{
    long long pow=1,i;
    for(i=0;i<4;i++)
    {
        pow=(pow*a);
    }
    return pow;
}
int main()
{
    long long i,n=10000000000;
    freopen("pow.txt","w",stdout);
    for(i=1;i<=n;i++)
        cout<<power(i)<<',';
    return 0;
}
