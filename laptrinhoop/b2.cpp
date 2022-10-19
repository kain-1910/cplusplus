#include<bits/stdc++.h>
using namespace std;

class Sp {
private:
    int a,b;
public:
    friend istream& operator >> (istream& is, Sp &x);
    friend ostream& operator << (ostream& os, Sp x);
    Sp operator + (Sp x);
};

istream& operator >> (istream& is, Sp& x){
    cout << "Nhap phan thuc: ";
    is >> x.a;
    cout << "Nhap phan ao: ";
    is >> x.b;
    return is;
}

ostream& operator << (ostream& os, Sp x){
    os << x.a << " + " << x.b << "i" << endl;
    return os;
}

Sp Sp::operator + (Sp x) {
    Sp c;
    c.a = x.a + a;
    c.b = x.b + b;
    return c;
}
int main() {
    Sp t, q;
    cin >> t >> q;
    cout << t << q;
    cout << t + q << endl;
    return 0;
}

