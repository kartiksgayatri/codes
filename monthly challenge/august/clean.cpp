#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,n,m,c,count;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        count =0;
        int a[n],b[n];
        //memset(a,0,n);
        //memset(b,0,n);
        for(int i=0;i<n;i++)
        a[i]=b[i]=0;
        //for(int i=0;i<n;i++)
        //    cout<<a[i]<<'\t'<<b[i]<<endl;
        for(int i=0;i<m;i++){
        cin>>c;
        if(c<=n){
               // cout<<"hello\n";
        if(a[c-1]==0){
            a[c-1]=c;
            count ++;
            b[c-1]=i;
            //cout<<"hello1\n";
            }
            else if(a[c-1]==c)
            {
                //continue;
               // cout<<"hello2\n";
                b[c-1]=i;
            }

        else{
                //cout<<"hello3\n";
            int min=b[0],pos=0;
            for(int j=0;j<n;j++)
                if (b[j]<min){
                    min=b[j];
                    pos=j;}
            a[pos]=c;
            count++;
            b[pos]=i;
            //cout<<pos<<endl;
        }
        }
        else
            {//cout<<"hello4\n";
                int min=b[0],pos=0;
            for(int j=0;j<n;j++)
                if (b[j]<min){
                    min=b[j];
                    pos=j;}
            a[pos]=c;
            count++;
            b[pos]=i;
            //cout<<pos<<endl;
            }
        }
        cout<<count<<endl;
    }
}
