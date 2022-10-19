#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            cnt++;
        }
        if(a[i] == 0){
            cout << cnt;
            return 0;
        } 
    }
    return 0;
}