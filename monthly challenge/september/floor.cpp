#include<iostream>
#include<cmath>
using namespace std;
/*long long power(long long a,long long m)
{
    long long pow=1,i;
    for(i=0;i<4;i++)
    {
        pow=(pow*a)%m;
    }
    return pow;
}*/
int main()
{
    long long t,i,n,m,val;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        val=0;
        i=1;
        while(i<=n)
        {
            val=(val+((((long long)(pow(i,4)))%m)*(n/i))%m)%m;
            i++;
        }
        cout<<val<<endl;
    }
}
