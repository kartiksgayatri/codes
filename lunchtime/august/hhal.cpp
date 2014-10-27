#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char h[100001];
    int i,j,k,t,n,m,cnt,amt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>h;
        n=strlen(h);
        amt=n;
        //m=n;
        //cout<<n;
        for(i=0;i<n&&amt>0;)
        {
            //for(int x=0;x<n;x++)
            //cout<<h[x]<<"  ";
            //cout<<i<<endl;
            if(h[i]!='c'){
                    //cout<<h[i]<<"  "<<i<<endl;
                k=n-1;
                j=i;
            while(j<k)
            {
                //cout<<"hi\n";
                if(h[j]==h[k]&&h[j]!='c'&&h[k]!='c'){
                    h[j]=h[k]='c';
                    j++;
                    k--;
                    amt=amt-2;
                }
                else
                    k--;
            }
            i=j;
            cnt++;
        }
        else
            i++;

        if(amt<=0)
            break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
