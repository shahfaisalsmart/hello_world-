#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        int n; 
        scanf("%d",&n);
        int temp=1;
        while (n!=0)
        {
            temp = temp *2;
            n--;
                if (n==0)
                {
                    break;
}
            temp++;
            n--;
        }
        printf("%d\n", temp);
        
    }
    
    return 0;
}
