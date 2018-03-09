#include <stdio.h>

int main(){
    int n; 
    int k,j,sum=0; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    
    for(int a_i = 0; a_i < n; a_i++)
    {
        for(j=a_i+1;j<n;j++)
            {
                if((a[a_i]+a[j])%k==0)
                    {
                    sum++;
                    // printf("a=%d",);   
                    }
                    
            }
    }
    printf("%d",sum);
    return 0;

}
