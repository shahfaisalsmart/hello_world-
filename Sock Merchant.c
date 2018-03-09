#include<stdio.h>
int main ()
{
    int i, n;
    int a[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int f=0;
    for(i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            f++;
            i++;
        }
    }
    printf("%d", f);
    return 0;
}
