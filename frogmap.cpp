#include<iostream>
#include<map>
using namespace std;
int main()
{
    std::map<long long,long long>frogs;
    std::map<long long,long long>::iterator it1;
    std::map<long long,long long>::iterator it2;
    std::map<long long,long long>::iterator it3;
    long long n,k,p,i,x,temp;
    int a,b;
    int flg;
    cin>>n>>k>>p;
    for(i=0;i<n;i++)
    {
        cin>>x;
        frogs[x]=1;
    }
    while(p--)
    {
        flg=0;
        cin>>a>>b;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        it1=frogs.find(a);
        it2=frogs.find(b);
        std::map<long long,long long>::iterator it3;
        for(it3=it1;it3!=it2;it3++)
        {
            it1++;
            if((it1->first-it3->first)<k)
            flg=1;
            it1=it3;
        }
        //std::cout<<*it1<<'\t';
        if(flg==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    /*for(i=0;i<n;i++)
    {
        std::cout<<frogs[i]<<endl;
        //std::cout<<it->second<<endl;
    }*/

    return 0;
}
