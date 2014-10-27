#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    long long i,j,k,t,n;
    //cin>>t;
    scanf("%lld",&t);
    while(t--)
    {
        long long max=0;
        cin>>n;
        long long a[100001]={0};
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        sort(a,a+n);
        for(i=n-1;i>=0;i=i-2)
            max=max+a[i];
        //cout<<max<<endl;
        printf("%lld\n",max);
    }
    return 0;
}
