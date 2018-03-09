#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   int i, a[26];
    for (i=0; i<26; i++)
    {
        scanf("%d",&a[i]);
    }
     char b[10];
    scanf("%s", b);
    int len=0;
    for(i=0; b[i]!='\0'; i++)
    len++;
   // printf("%d",i);
    int max=a[0];
    for( i=0; i<26; i++)
    {
    if(max < a[i])
    {
        max=a[i];
    }
    }
    
    printf("%d", max*len);
    return 0;
}
