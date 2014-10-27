#include<iostream>
#include<cstdio>
using namespace std;
long long incn[200001];
int main()
{
    long long n,temp,m,x=1,i,k,l,j,a[200001],cnt,ncn,initcnt=0;
    cin>>n>>m;
    for(k=0;k<n;k++)
        cin>>a[k];
    for(k=0;k<n;k++){
            for(l=k;l<n;l++)
                if(a[l]<a[k])
                    initcnt++;
            incn[k]=initcnt-incn[k];
            //cout<<incn[k]<<endl;
            //x++;
                }
    while(m--)
    {
        ncn=0;
        cnt=0;
        cin>>i>>j;
//        if(i>j)
  //          cout<<0<<endl;
    //    else
        for(k=i-1;k<j;k++)
            for(l=k;l<j;l++)
                if(a[l]<a[k])
                    ncn++;

        temp=a[i-1];
        a[i-1]=a[j-1];
        a[j-1]=temp;

        for(k=i-1;k<j;k++)
            for(l=k;l<j;l++)
                if(a[l]<a[k])
                    cnt++;
        //cout<<cnt<<endl;
        ncn=cnt-ncn+incn[n-1];
        temp=a[i-1];
        a[i-1]=a[j-1];
        a[j-1]=temp;
        cout<<ncn<<endl;
        //for(i=0;i<n;i++)
        // } //  cout<<incn[i]<<endl;
    }
    return 0;
}
