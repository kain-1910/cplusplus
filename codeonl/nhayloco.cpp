#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, x1, y, y1;
    cin >> x >> x1 >> y >> y1;
    if(x == y){
        if(x1 != y1) cout << "NO";
        else cout << "YES";
    } 
    else{
        if(x1 <= y1 || x1 > (2*y1)) cout << "NO";
        else cout << "YES";
    }
    return 0;
}