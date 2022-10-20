#include<bits/stdc++.h>
using namespace std;
int main() {
    double x, y, z;
    cin >> x >> y >> z;
    double s = (x*2 + y*3 + z*5)/10;
    cout << "Trung binh = " << fixed << setprecision(1) << s << endl;
    return 0;
}