#include<bits/stdc++.h>
using namespace std;
bool IsPrime(int x){
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    int x[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        int cnt = 0;
        if(IsPrime(a[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}