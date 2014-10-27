#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;
std::string s,query,temp;
/*void inputstring()
{
    char ch;
    long i=0;
    while((ch=getchar())!='\n')
    {
        query[i]=ch;
        i++;
    }
}*/
int main()
{
    long q,pos;
    cin>>q;
   // char ch123=getchar();
    while(q--)
    {
        //inputstring();
        cin>>query;
        //char ch=query[2];
        //pos=query.find(ch);
        int len1=(s.length()-pos),len2=(query.length()-4),len3;
        if(query[0]=='+')
        {
            temp=s.substr(pos,len1);
            string temp2=query.substr(4,len2);
            s.replace(len2,len1,temp);
            s.append(temp2);
        }
        else
        {
            pos=pos-1;
            char ch1=query[4];
            int pos1=query.find(ch1);
            cout<<s.substr(pos,pos1);
        }
    }
    return 0;
}
