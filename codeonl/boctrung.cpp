#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,s,t;
    cin >> n >> s >> t;
    if(s == t){
        if(s == n) cout << 1;
        else if(s + t - n <= 1) cout << n;
        else if(s + t - n > 1) cout << s;
    }
    else{
        (s<t)?cout << n-s+1:cout << n-t+1;
    }
    return 0;
}