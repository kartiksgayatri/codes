#include<iostream>
using namespace std;
int main()
{
    long long a[100001],n,i,j,s=0,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            s=s+(a[i]&a[j]);
    }
    cout<<s<<endl;
    return 0;
}
