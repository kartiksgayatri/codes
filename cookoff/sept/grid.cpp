#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main()
{
    int t,n,i,j,k,l,cnt;
    scanf("%d",&t);
    while(t--)
    {
        char mat[1001][1001];
        cnt=0;
        scanf("%d",&n);
            //for(j=0;j<n;j++)
              //  mat[j]=\0';
            for(j=0;j<n;j++)
                scanf("%s",mat[j]);
        for(i=n-1;i>=0;i++)
            for(j=0;j<n;j++)
        {
            if(mat[i][j]=='.')
            {
                k=j;
                l=i;
                while(mat[i][k]=='.')
                    k++;
                if(k==n)
                    while(mat[l][j]=='.')
                        l++;
                if(l==n)
                    cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
