#include<iostream>
using namespace std;
int main()
{
    long long x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>0&&x%2!=0&&y<=(x+1)&&y>=((-1*x)+1))
        {
            cout<<"YES\n";
        }
        else if(x<0&&x%2==0&&y>=(x)&&y<=(-1*x))
        {
            cout<<"YES\n";
        }
        else if(y>0&&y%2==0&&x>=(-1*y)&&x<y)
        {
            cout<<"YES\n";
        } //   cout<<"YES\n";
        else if(y<0&&y%2==0&&x>=y&&x<((-1*y)+1)&&x>0)
        {
            cout<<"YES\n";
        }
        else if(y<0&&y%2==0&&x<=y)
        {
            cout<<"YES\n";
        }//    cout<<"YES\n";
        else if(x==0&&y==0)
        {
            cout<<"YES\n";
        }//    cout<<"YES";
        else
            cout<<"NO\n";
    }
    return 0;
}
