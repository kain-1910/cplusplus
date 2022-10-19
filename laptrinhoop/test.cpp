#include<bits/stdc++.h>
using namespace std;

class Ps {
private:
    int ts, ms;
public:
    Ps(){
        ts=ms=0;
    }

    friend istream& operator >> (istream& is, Ps &a) {
        cout << "Nhap tu so: ";
        is >> a.ts;
        cout << "Nhap mau so: ";
        is >> a.ms;
        return is;
    }

    friend ostream& operator << (ostream& os, Ps a) {
        os << a.ts << "/" << a.ms << endl;
        return os;
    }

    friend Ps operator + (Ps a, Ps b){
        Ps t;
        t.ts = a.ts*b.ms + b.ts*a.ms;
        t.ms = a.ms*b.ms;
        return t;
    }
    Ps operator - (Ps a){
        Ps b;
        b.ts = a.ts*this->ms - this->ts*a.ms;
        b.ms = a.ms*this->ms;
        return b;
    }
    Ps operator ++ ();
};

Ps Ps::operator ++ () {
    this->ts = this->ts+this->ms;
    return (*this);
}
int main() {
    Ps a, b;
    cin >> a >> b;
    cout << a << b;
    cout << a + b;
    cout << ++a << endl;
    return 0;
}

