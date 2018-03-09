#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int k; 
    scanf("%d",&k);
    int i = 0;
    while(s[i]==t[i]){
        i++;
    }
    int sl=strlen(s), tl=strlen(t);
    int diff=k-sl-tl+2*i;
    if(diff<0){
        printf("No");
    }
    else if(diff<=2*i){
        if(diff%2!=0){
            printf("No");
        }
        else{
            printf("Yes");
        }
    }
    else{
        printf("Yes");
    }
    return 0;
}

