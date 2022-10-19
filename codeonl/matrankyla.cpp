#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main() {
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	int n;
    cin >> n;
    int x =  1 + n/2;
    int a[n+1][n+1];
    int pos1, pos2;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                pos1 = i;
                pos2 = j;
            }
        }
    }
    if(n % 2 == 0){
        cout << -1;
        return 0;
    }
    if(n == 1){
        cout << 0;
        return 0;
    }
    if(pos1 == x || pos2 == x){
        cout << pos1 - x;
    }
    else{
        cout << abs(x-pos1) + abs(x -pos2);
    }
	return 0;
}