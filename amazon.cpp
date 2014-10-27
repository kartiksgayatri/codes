#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    long long k,l,p,i,x,cnt,j,sum,a[100001];
    char ch[10];
    cin>>k>>l;
    p=pow(2,l);
    for(i=0;i<p-2;i++){
        cin>>ch;
        if(ch!="#")
            a[i]=atol(ch);
        else
            a[i]=-9999;
        cout<<a[i]<<endl;
    }
    for(j=p-2;j>0;j++)
    {
        long long b[100001]={0};
        cnt=0;
        i=p-2;
        while(a[i]!=-9999&&sum<k)
        {
            sum=sum+a[i];
            b[cnt++]=a[i];
            if(i%2==0)
                x=(i-1)/2;
            else
                x=(i-2)/2;
        }
        if(sum==k)
            for(int i=0;i<cnt;i++)
            cout<<b[i]<<endl;
    }
    return 0;
}
