#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, result;
    cin>> n;
    int a[100];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    result = -1;
    for(int i=0; i<n; i++,result++){
       if(i<n-2 && a[i+2]==0){
           i++;
       }
       // cout << i;
    }
    
   cout<< result;
    return 0;
}
