#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main ()
{
    int d1, m1, y1;
    scanf("%d %d %d", &d1, &m1, &y1);
    int d2, m2, y2;
    scanf("%d %d %d", &d2, &m2, &y2);
    if (y1-y2==0 && m1-m2==0 && d1-d2>=1)
    {
        printf("%d",15*(d1-d2));
      
    }
    else if(y1-y2==0 && m1-m2>=1)
    {
        printf("%d",500*(m1-m2));
       
    }
    else if (y1-y2>=1)
    {
        printf("10000");
        
    }
    else if (y1-y2<=0)
    {
        printf("0");
    }
    return 0;
}
