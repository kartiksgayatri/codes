#include<iostream>
using namespace std;
int main()
{
    long long n,m,q,mod;
    cin>>n>>m;
    while(m--)
    {
        cin>>q;
        if(q<=n+1||q>3*n)
            cout<<0<<endl;
        else if(q>(2*n)+1)
        {
            mod=3*n-q;
            cout<<mod+1<<endl;
        }
        else
        {
            mod=q%n;
            if(mod==0)
                cout<<n-1<<endl;
            else if(mod==1)
                cout<<n<<endl;
            else
                cout<<mod-1<<endl;
        }
    }
    return 0;
}
