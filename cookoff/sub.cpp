#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long a[100002]={0},t,n,len,num;
    //freopen("out.txt","r",stdin);
    //freopen("out3.txt","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        len=0;
        for(int i=0;i<100000;i++)
            a[i]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>num;
            //cout<<a[num];
            if(a[num]==0)
            {
                    len++;
                    a[num]=num;
            }
        //cout<<a[num];
        }

        cout<<len<<endl;
    }
    return 0;
}
