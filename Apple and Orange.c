#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int s,t;
    int a,b;
    int m,n;
    int apn=0, orgn=0;
    int ap, org;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);
    for(int i=0; i < m; i++){
        scanf("%d", &ap);
        if (a+ap >= s && a+ap <= t){
            apn++;
        }
    }
    for (int i=0; i < n; i++){
        scanf("%d", &org);
        if(b+org >= s && b+org <= t){
                orgn++;
        }
    }
    printf("%d\n%d", apn,orgn);
    return 0;
}
