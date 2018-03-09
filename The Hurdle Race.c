#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main ()
{
    int n,k;
    
   // int i, a[10];
    scanf("%d %d", &n, &k);
    int a[n],i,count=0,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>k)
        {
         for(j=0;j<(a[i]-k);j++)
                count++;
               
            k+=(a[i]-k);
    }
    }
 /*   int c=0;
    for(i=0; i<n; i++)
    {
        if(k < a[i]){
            c++;
    }
    }*/
    printf("%d",count);
    return 0;
}
