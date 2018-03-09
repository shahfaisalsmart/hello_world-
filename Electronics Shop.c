#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main ()
{
    int s,n,m,i,j,k=0; 
    scanf("%d %d %d",&s,&n,&m);
    int t[m*n], a[n], b[m];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j=0; j<m; j++)
    {
        scanf("%d", &b[j]);
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++,k++)
            t[k] = a[i]+b[j];
    }
    b[0]=-1;
    for(i=0; i<n*m; i++)
    {
        if (s>=t[i] && b[0]<t[i] )
            b[0]=t[i];
    }
    if (s < b[0]){
         b[0]=-1;
    }
    printf("%d", b[0]);
    return 0;
}
