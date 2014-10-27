#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,flg1=0,flg2=0,flg3=0,flg4=0;
    int x[2001],y[2001];
    cin>>n;//n==0 cout<<4;
    if(n==0)
        flg4=1;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(x[i]==y[j]&&i!=j){
                flg2=1;
                for(k=0;k<n;k++)
                    if(y[j]==x[k])
                        flg1=1;
            }
        }
        if(flg4==1)
            cout<<4<<endl;
        else if(flg1==1)
            cout<<0<<endl;
        else if(flg2==1)
            cout<<1<<endl;
        else
            cout<<2<<endl;
        return 0;
}
