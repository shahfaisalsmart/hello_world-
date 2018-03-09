#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,k,c=0; 
    scanf("%d",&n);
    int a[100] = {0};
    for (int i=0; i<n; i++)
    {
        scanf("%d",&k);
           a[k]++;
        
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]+a[i+1] > c)
            c = a[i] +a[i+1];
    }
    printf("%d", c);
    return 0;
}
