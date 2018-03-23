#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    // Complete this function
    int count=1;
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            count++;
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}
