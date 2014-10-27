#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long t,val,l,i;
    char ch[100001];
    cin>>t;
    //ch=getchar();
    while(t--)
    {
        val=1;
        l=2;
        i=0;
        scanf("%s",ch);
        while(ch[i]!='\0')
        {
            //ch=getchar();
            //if(ch=='\n')
              //  break;
            l++;
            if(l%2==0)
            {
                if(ch[i]=='l')
                {
                    val=((val*2)-1)%1000000007;
                }
                else
                {
                    val=((val*2)+1)%1000000007;
                }
            }
            else
            {
                if(ch[i]=='l')
                {
                    val=(val*2)%1000000007;
                }
                else
                {
                    val=((val*2)+2)%1000000007;
                }
            }
            i++;
        }
        cout<<val<<endl;
    }
    return 0;

}
