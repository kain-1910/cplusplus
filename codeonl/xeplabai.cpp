#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long cnt = 0;
    for(int i = 1; i <= n; i++){
        cnt += (3*i - 1);
    }
    cout << cnt << endl;
    return 0;
}