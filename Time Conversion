#include<stdio.h>
#include<string.h>
int main()
{
	
	int h,m,s;
    string time;
    char ch;
    
    cin >> time;

    stringstream t(time);
    t >> h >> ch >> m >> ch >> s >> ch;
	
    if(ch == 'P' && h<12)
        h = (h+12)%24;
    if(ch == 'A' && h==12)
        h = 0;
    
	printf("%02i:%02i:%02i\n",h,m,s); 
    
    return 0;
}
