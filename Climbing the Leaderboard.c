#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*int main ()
{
    int n,m;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d", &b[m]);
    }*/
  //  #include <stdio.h>
int i, n, m, score, top, stack[200002];
int main() {
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &stack[top+1]);
        if (stack[top+1] != stack[top]) top++;
    }
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &score);
        while (top && score >= stack[top]) top--;
        printf("%d\n", top+1);
    }
    return 0;
}
  
