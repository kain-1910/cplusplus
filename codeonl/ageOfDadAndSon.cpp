#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int y = (c - 3*b)/(3*a - 1);
    cout << a*y+b << endl << y;
    return 0;
}