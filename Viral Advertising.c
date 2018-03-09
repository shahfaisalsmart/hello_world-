#include<stdio.h>
int main ()
{
    int n, p1=0, pt=0;
    int a=5;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        p1 = a/2;
        pt = pt + p1;
        a = p1*3;
    }
    printf("%d", pt);
    return 0;

}
