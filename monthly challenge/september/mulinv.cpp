#include<iostream>
using namespace std;
long long pow(int a, int b, long long MOD) {
long long x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}

long long modInverse(long long a, long long m) {
    return pow(a,m-2,m);
}
int main()
{
    cout<<modInverse(720,1000000007)<<endl;
    return 0;
}

