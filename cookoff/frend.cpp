#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long i,j,n,m,num,flg=0,mat=0,sum=0;
    static int a[2001][2001];
    //freopen("out.txt","r",stdin);
    cin>>n;
    for(i=0;i<n;i++)
    {
        flg=0;
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
            {
                    sum++;
            }
                else
                    flg=1;
        }
        if(flg==0)
        mat++;
    }
    //cout<<mat<<endl;
    //cout<<sum<<endl;
    cout<<(sum-(mat*(n))-(mat*(n-mat))-(n-mat));
return 0;
}
