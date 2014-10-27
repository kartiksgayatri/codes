#include<iostream>
#include<cstdio>
#include<cmath>
#define mod 1000000007
using namespace std;
int main()
{
long long int n,diff,ans=0;
scanf("%lld",&n);
 diff=n-13;
 if(diff<0)
    printf("0\n");
 else
 {
    while(diff>=2)
    {
        if(diff==4)
         ans=ans+6;
        else
          ans=ans+(diff/4*30+6)%mod;
        diff=diff-2;
    }
    printf("%lld\n",(ans+1));
}
return 0;
}
