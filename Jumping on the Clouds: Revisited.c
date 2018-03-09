#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main ()
{
    int n, k;
    int E = 100;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i=i+k)
    {
        if (a[i]==1)
        E = E -3;
        else if (a[i]==0)
        E = E - 1;
    }
    printf("%d",E);
    return 0;
    
}
