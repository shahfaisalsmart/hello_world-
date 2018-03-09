#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*int main ()
{
    int i, n,c=0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int t=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]!=t){
           c++; }
    }
    printf("%d", c);
    return 0;
}*/
int main() {
    int n,i,j,max=0,cnt;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        {
        cnt=0;
        
        for(j=i;j<n;j++)
            {
            if(a[i]==a[j])
                cnt++;
             }
       
        if(cnt>max)
            max=cnt;
    }
    printf("%d",n-max);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
