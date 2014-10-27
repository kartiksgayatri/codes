#include<iostream>
#include<algorithm>
using namespace std;
long long max3(long long a, long long b, long long c)
{
    if(a>b)
        if(a>c)
            return a;
        else
            return c;
    else
        if(b>c)
            return b;
        else
            return c;
}
int main()
{
    int t,r,g,b,m,i;
    cin>>t;
    while(t--)
    {
        cin>>r>>g>>b>>m;
        long long red[r],blue[b],green[g],rd,bl,gr,max;
        for(i=0;i<r;i++)
            cin>>red[i];
        for(i=0;i<g;i++)
            cin>>green[i];
        for(i=0;i<b;i++)
            cin>>blue[i];
        sort(red,red+r);
        sort(green,green+g);
        sort(blue,blue+b);
        rd=red[r-1];
        bl=blue[b-1];
        gr=green[g-1];
        while(m--)
        {
            if(rd>gr)
                if(rd>bl)
                    rd=rd/2;
                else
                    bl=bl/2;
            else
                if(gr>bl)
                    gr=gr/2;
                else
                    bl=bl/2;

        }
        max=max3(rd,gr,bl);
        cout<<max<<endl;
        //cout<<rd<<" "<<bl<<" "<<gr<<endl;
    }
    return 0;
}
