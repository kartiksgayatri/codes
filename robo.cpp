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
        else
        {
            if(x<y)
            {
                y=y-x;
                if(y%2!=0)
                    sum=2*x+(y/2)*4+1;
                else
                    sum=2*x+(y/2)*4;
            }
            else
            {
                x=x-y;
                if(x%2!=0)
                    sum=2*y+(x/2)*4+3;
                else
                    sum=2*y+(x/2)*4;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

