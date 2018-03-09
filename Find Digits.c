#include<stdio.h>
int main()
{
      int i,j,k,n,f=0;
      int a[5];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        j=a[i];
        for(;j!=0;)
        {
            k=j%10;
            if(k==0)
            {
                j=j/10;
            } else {
                if(a[i]%k==0)
                {
                    f++;
                }
            j=j/10;
            }
        }
        printf("%d\n",f);
        f=0;
    }
    return 0;
}
