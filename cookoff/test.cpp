#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j;
    freopen("out.txt","w",stdout);
    for(i=0;i<2000;i++)
    {
        for(j=0;j<2000;j++)
        {
            cout<<0<<' ';
        }
        cout<<endl;
    }
}
