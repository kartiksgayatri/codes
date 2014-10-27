#include<iostream>
using namespace std;
/*int binary_search(int A[], int key, int imin, int imax)
{
      int imid =(imin+imax)/2;
      if (A[imid] > key)
        return binary_search(A, key, imin, imid-1);
      else if (A[imid] < key)
        return binary_search(A, key, imid+1, imax);
      else
        return imid;
}*/
int main()
{
    int n,p,i,a,b,flg;
    long k,ar[100001]={0},br[100001],tempa,tempb,min;
    cin>>n>>k>>p;
    for(i=0;i<n;i++){
        cin>>br[i];
        ar[br[i]]=1;
    }
    while(p--)
    {
        flg=0;
        cin>>a>>b;
        tempa=br[a-1];
        tempb=br[b-1];
        min=tempa;
        for(i=tempa+1;i<=tempb;i++)
        {
            if((ar[i]==1)&&(i-min)>k)
            {
                flg=1;
                cout<<"No\n";
                break;
            }
        }
        if(flg==0)
        cout<<"Yes\n";

    }
}
