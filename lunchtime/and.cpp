#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
long long a[300001];
int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}

long long power(int a,int b)
{
    long long proc=1;
    for(int i=1;i<=b;i++)
    {
        proc=proc*2;
    }
    return proc;
}
int main()
{
    long long n,max=0,num,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    qsort(a,n,sizeof(long long),compare);
    if(a[0]<power(2,1))
    {
        for(int i=1;a[i]<=1;i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,2))
    {
        for(int i=1;a[i]>=power(2,1);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,3))
    {
        for(int i=1;a[i]>=power(2,2);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,4))
    {
        for(int i=1;a[i]>=power(2,3);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,5))
    {
     for(int i=1;a[i]>=power(2,4);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,6))
    {
        for(int i=1;a[i]>=power(2,5);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,7))
    {
        for(int i=1;a[i]>=power(2,6);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,8))
    {
        for(int i=1;a[i]>=power(2,7);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,9))
    {
        for(int i=1;a[i]>=power(2,8);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,10))
    {
        for(int i=1;a[i]>=power(2,9);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,11))
    {
        for(int i=1;a[i]>=power(2,10);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,12))
    {
        for(int i=1;a[i]>=power(2,11);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,13))
    {
        for(int i=1;a[i]>=power(2,12);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,14))
    {
        for(int i=1;a[i]>=power(2,13);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,15))
    {
        for(int i=1;a[i]>=power(2,14);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,16))
    {
        for(int i=1;a[i]>=power(2,15);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,17))
    {
        for(int i=1;a[i]>=power(2,16);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,18))
    {
        for(int i=1;a[i]>=power(2,17);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,19))
    {
        for(int i=1;a[i]>=power(2,18);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,20))
    {
        for(int i=1;a[i]>=power(2,19);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,21))
    {
        for(int i=1;a[i]>=power(2,20);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,22))
    {
        for(int i=1;a[i]>=power(2,21);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,23))
    {
        for(int i=1;a[i]>=power(2,22);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,24))
    {
        for(int i=1;a[i]>=power(2,23);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,25))
    {
        for(int i=1;a[i]>=power(2,24);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,26))
    {
        for(int i=1;a[i]>=power(2,25);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,27))
    {
        for(int i=1;a[i]>=power(2,26);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,28))
    {
        for(int i=1;a[i]>=power(2,26);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,29))
    {
        for(int i=1;a[i]>=power(2,28);i++)
    {
        temp=a[0]&a[i];
        if(max<temp)
            max=temp;
    }
    }
    else if(a[0]<power(2,30))
    {
        for(int i=0;a[i]>=power(2,29);i++)
        for(int j=i+1;a[i]>=power(2,29);j++)
    {
        temp=a[i]&a[j];
        if(max<temp)
            max=temp;
    }
    }
    cout<<max<<endl;
 //   for(int j=0;j<n;j++)
   //     cout<<a[j]<<endl;
//    cout<<power(2,30)<<endl;
    return 0;
}
