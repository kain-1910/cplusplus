#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            int x = a[i] - '0';
            int y = b[i] - '0';
            if(x == y) cnt += 0;
            else if(x < y) {
                if(y-x < (x-0 + 9-y)) cnt += y-x;
                else cnt += x-0 + 9-y + 1;
            }
            else {
                if(x-y < (y-0 + 9-x)) cnt += x-y;
                else cnt += y-0 + 9-x + 1;
            }
            // cout << cnt << endl;
        }
        cout << cnt << endl;
    }
    return 0;
}