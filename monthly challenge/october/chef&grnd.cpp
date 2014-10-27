#include<iostream>
using namespace std;
int main()
{
    int t,n,m,pos,sum,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[101]={0};
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        /*pos=a[0];
        for(i=0;i<n;i++)
            if(pos<a[i])
                pos=a[i];
        pos=pos*n;*/
        //cout<<pos<<endl;
        //if(pos==(sum+m)||n==1)
          if((sum+m)%n==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
