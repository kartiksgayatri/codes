#include<iostream>
using namespace std;
int main()
{
    long long a=999999999,b=1000000000,temp,div,rem,rem2;
    int cnt=0;
    while(b>0)
    {
        //cout<<b<<endl;
        rem=a%2;
        a=a/2;
        rem2=b%2;
        b=b/2;
        cnt++;
        cout<<rem<<'\t'<<rem2<<endl;
    }
    cout<<cnt;
}
