#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades){
    // Complete this function
    int mul ;
    for(int i = 0 ; i < grades_size ; i++){
        if(grades[i] >= 38){
            mul = grades[i] / 5 ;
            
            if( (5*(mul+1) - grades[i]) < 3){
                grades[i] = 5 * (mul+1) ;
            }
        }
    }
    return grades ;
}
 
int main() {
    int n; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int* result = solve(n, grades);
    for(int result_i = 0; result_i < n; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
   
    return 0;
}
