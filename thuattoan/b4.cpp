#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    int h, s;
    cin >> a >> c >> b >> d;
    if(a != b){
        if(a <= c){
            h = b-a;
        }
        else {
            h = (24-a) + b;
        }

        if(c <= d){
            s = d-c;
        }
        else {
            s = (60-c) + d;
        }

        if(b - a == 1 && c > d){
            h = 0;
            s = (60-c) + d;
        }
    }
    else {
        if(c == d){
            h = 24;
            s = 0;
        }
        else {
            h = 0;
            s = d-c;
        }
    }

    cout << "O JOGO DUROU " << h << " HORA (S) E " << s << " MINUTO (S)" << endl;
    return 0;
}