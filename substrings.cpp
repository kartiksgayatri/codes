#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long t,n,i,s,cnt;
    char str;
    //freopen("out1.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        s=0;
        cnt=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>str;
            if(str=='1')
                cnt++;
                }
                //cnt++;
        s=(cnt)*(cnt+1)/2;
        cout<<s<<endl;
    }
    return 0;
}
