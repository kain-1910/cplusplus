#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio();cin.tie(NULL);cout.tie(NULL);
    long n;
    for(int i = 0; i < 4; i++){
        cout << i << endl;
        for(int j = 0; j <= i; j++) cout << " ";
    }
    for(int i = 3; i > 0; i--){
        cout << i << endl;
        for(int j = 0; j <= i; j++) cout << " ";
    }
    return 0;
}
