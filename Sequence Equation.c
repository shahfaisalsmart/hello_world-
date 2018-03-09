#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main ()
{
    int i, n;
    scanf("%d", &n);
    int a[n+1];
    for(i=1; i<=n; i++)
    {
        int t;
        scanf("%d", &t);
        a[t]=i;
    }
    
    for(i=1; i<=n; i++)
    {
        printf("%d\n", a[a[i]]);
    }
    
}
