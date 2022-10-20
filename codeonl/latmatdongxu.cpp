#include<bits/stdc++.h>
using namespace std;

bool Check(int x) {
    for(int i = 1; i <= x; i++){
        if(i*i == x) return true;
    }
    return false;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int cnt = x;
        for(int i = 1; i <= x; i++){
            if(Check(i)) cnt--;
        }
        cout << cnt << endl;
    }
    
    
    return 0;
}