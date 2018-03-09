#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      int n,i,d=0, e=0, flag=0;
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++)
    {
        scanf("%c", &a[i]);
    }
    
    for(i=0; i<n; i++)
    {
        if (a[i] =='D')
        {
            d--;
        }    
        if (a[i] =='U')
        {
            d++;
        }
        if (d<0 && flag==0)
        {
            flag++;
            e++;
        }
        else if (d==0 && flag==1)
            flag--;
    }
    printf("%d", e);
    return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
}
