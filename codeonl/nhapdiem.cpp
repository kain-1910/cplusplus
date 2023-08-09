#include<bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    double sum = 0;
    while(cnt < 2) {
        double x;
        cin >> x;
        if(x <=10 && x >= 0){
            sum += x;
            cnt++;
        }
        else cout << "Nhap sai" << endl;
    }
    cout << "TB = " << setprecision(2) << fixed << sum/cnt << endl;
    return 0;
}