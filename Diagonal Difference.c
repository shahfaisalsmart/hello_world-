#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main () {
    int i,j, a[100][100];
    int m, s1=0, s2=0;
    scanf("%d", &m);
    int count = m-1;
    for(i=0; i<m; i++)
    {
        for (j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<m; i++)
    {
        s1 = s1 + a[i][i];
        s2 = s2 + a[count][i];
        count--;
    }
    printf("%d", abs(s1-s2));
    return 0;
}
