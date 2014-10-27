#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long i,j,temp,n,m,a[100001],num;
    char ch;
    //scanf("%d %d",&n,&m);
    cin>>n>>m;
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    i=j=0;
    //cout<<"inp\n";
    temp=m;
    while(m--)
    {
       // cout<<"m\n";
        cin>>ch>>num;
        //scanf("%d",&num);
        //temp=num;

        if(ch=='R')
        {
            if(m+1==temp)
            {
                printf("%d\n",a[num-1]);
            }
            else
            {
      //      cout<<"R\n";
                for(j=i;j<n&&num>1;num--,j++);
                    //cout<<a[j]<<' ';
                if(j>n-1)
                    j=0;
                for(;j<n&&num>1;num--,j++);
                //cout<<a[j]<<' ';
                //cout<<endl;
                printf("%d\n",a[j]);
            }
        }
        else if(ch=='C')
        {
        //    cout<<"C\n";
            for(;i<n&&num>0;i++,num--);
            //cout<<a[i]<<' ';
            if(num>1)
                i=0;
            for(;i<n&&num>0;i++,num--);
            //cout<<a[i]<<' ';
            //cout<<endl;
            //cout<<a[i]<<endl;
        }
        else if(ch=='A')
        {
          //  cout<<"A\n";
            for(;i>=0&&num>0;i--,num--);
            if(num>1)
                i=n-1;
            for(;i>=0&&num>0;i--,num--);

            //cout<<a[i]<<endl;
        }
    }
    return 0;
}
