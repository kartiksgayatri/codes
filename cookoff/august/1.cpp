#include<iostream>
using namespace std;
int main()
{
    int n,m,t,flag=0;
    char a[51][51];
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            if(a[i][j]=='L')
            {
                for(int y=0;y<m;y++)
                    if(a[i][y]!='L')
                        a[i][y]='.';
                for(int y=i;y>-1;y--)
                    if(a[y][j]!='L')
                        a[y][j]='.';
            }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                    if(a[i][j]=='E')
                        flag=1;

    if(flag==0)
        cout<<"Possible\n";
    else
        cout<<"Impossible\n";
    }
    return 0;
}
