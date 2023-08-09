#include <bits/stdc++.h>
using namespace std;
int sumOfOdd(int x) {
    int cnt = 1;
    for(int i = 3; i <= x; i += 2) {
        if(x % i == 0) cnt += i;
    }
    return cnt;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        long x, y;
        cin >> x >> y;
        long sum = 0;
        for(int i = x; i <= y; i++) {
           if()
        }
        cout << sum << endl;
    }
    return 0;
}