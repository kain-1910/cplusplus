#include<bits/stdc++.h>
using namespace std;
class Ps{
private:
    int ts, ms;
public:
    Ps(){
        ts = ms = 0;
    }
    Ps(int ts, int ms){
        this->ts = ts;
        this->ms = ms;
    }
    void Nhap(){
        cout << "Nhap tu so: ";
        cin >> ts;
        while(true){
            cout << "Nhap mau so: ";
            cin >> ms;
            if(ms == 0) cout << "Khong duoc nhap mau so = 0!!!" << endl;
            else break;
        }
        
    }
    Ps operator * (Ps b){
        Ps x;
        x.ts = ts*b.ts;
        x.ms = ms*b.ms;
        return x;
    }
    friend ostream& operator << (ostream& os, Ps a){
        int x = __gcd(a.ts, a.ms);
        a.ts /= x;
        a.ms /= x;
        os << a.ts << "/" << a.ms << endl;
        return os;
    }
};
int main() {
    Ps b;
    cout << "Nhap phan so thu nhat\n";
    int x, y;
    cout << "Nhap tu so: "; cin >> x;
    cout << "Nhap mau so: "; cin >> y;
    Ps a(x,y);
    cout << "Nhap phan so thu hai\n";
    b.Nhap();
    cout << "Phan so thu nhat: " << a << endl;
    cout << "Phan so thu hai: " << b << endl;
    cout << "Tich cua hai phan so la: " << a*b << endl;
    return 0;
}