#include<iostream>
#include<vector>
using namespace std;

int a[5];
int main()
{
 int n; cin>>n;
 int x;
 for(int i=0;i<n;i++) {
 cin>>x;
 a[x-1]++;
 }
 int ans,max=0;
 for(int i=0;i<5;i++)
 {
 if(a[i]>max) {
 max = a[i];
 ans = i;
 }
 }
 cout<<ans<<endl;
}
