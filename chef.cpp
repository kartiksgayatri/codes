#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long sum,t,x,y;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>x>>y;
        if(x<0)
            x=-1*x;
        if(y<0)
            y=-1*y;
        if(x==y)
            sum=2*x;
        else if(x%2==0&&y%2==0)
            sum=x+y+2;
        else if(x%2!=0&&y%2!=0)
            sum=x+y+2;
        else if((x<y-1)||(x>y+1))
            sum=x+y+2;
        else
            sum=x+y;
        cout<<sum<<endl;
    }
    return 0;
}
