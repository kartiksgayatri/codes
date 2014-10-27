/*#include<stdio.h>
int main()
{
    int i,t,n,k,a[55]={0},count,flg;
    scanf("%d",&t);
    while(t--)
    {
        //flg;
        scanf("%d %d",&n,&k);
        if(k==0){
                flg=0;
            for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2!=0)
            flg++;
            else count++;
        }
        if(flg<n)
            printf("YES\n");
        else if(count<n) printf("YES\n");
        else printf("NO\n");
        }
        else
        {
        for(i=0;i<55;i++)
            a[i]=0;
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
            count++;
        }

        //for(i=0;i<n;i++)


        if(count>=k)
            printf("YES\n");
        else printf("NO\n");
        }
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int count,i,j,a,n,k,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        count=0;
        if(k==0)
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&a);
                if(a%2==0)
                    count++;
            }
            if(count<n)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&a);
                if(a%2==0)
                    count++;
            }
            if(count>=k)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
