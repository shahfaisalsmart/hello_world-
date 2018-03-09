#include<stdio.h>
int main ()
{
    int i=0, j=0, k=0, x=0;
    int r=0, sum=0,count=0;
    scanf("%d %d %d", &i, &j, &k);
    for (i; i<=j; i++)
    {
        x=i;
    
    while (x!=0)
    {
        r = x % 10;
        sum = (sum*10) + r;
        x = x/10;
}
    if (abs(i-sum)%k==0)
        count++;
        sum=0;
}
    printf("%d", count);
    return 0;
}
