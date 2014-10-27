#include<iostream>
using namespace std;
int main()
{
    long long t,n,a[100001],sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long small1=a[0],p=0;
        for(int i=0;i<n;i++)
        {
            if(small1>a[i]){
                small1=a[i];
                p=i;
            }
        }
        cout<<small1<<endl;
        long long small2=a[0];
        a[0]=a[p];
        a[p]=small2;
        small2=a[1];
        for(int i=1;i<n;i++)
        {
            if(small2>a[i])
                small2=a[i];
        }
        cout<<small1+small2<<endl;
    }
    return 0;
}
