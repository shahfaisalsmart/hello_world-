#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main ()
{
    int x1,v1;
    int x2,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
if (v2>v1 || v2==v1)
{
    printf("NO\n");
}
    else if ((x1-x2)%(v2-v1)==0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
