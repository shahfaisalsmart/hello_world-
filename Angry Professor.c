#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*int main(){
    int t, c=0; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        int a[n];
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
            if (a[a_i]<=0)
                c++;
        }
        if (c >= k)
    {
        printf("N0\n");
    }
    else
        printf("YES\n");
    }
    
    
    return 0;
}*/

int main(){
    int t; 
    scanf("%d",&t);
     int n,k;
     int a[1000];
    for(int a0 = 0; a0 < t; a0++){
        scanf("%d %d",&n,&k);
        int neg=0;
        for(int i = 0; i < n; i++){
           scanf("%d",&a[i]);
           if(a[i]<=0)
               neg=neg+1;
        }
        if(neg>=k)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
