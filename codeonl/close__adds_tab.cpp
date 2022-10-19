#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    string s;
    for(int i = 0; i < y; i++) {
        cin >> s;
        if(s == "fechou") x += 1;
        else x--;
    }
    cout << x;
    return 0;
}