#include<bits/stdc++.h>
using namespace std;
class DT {
private:
    int bac;
    double *hs;
public:
    DT() {
        bac = 0;
        hs = new double[bac];
    }
    friend istream& operator >> (istream& is, DT &a) {
        cout << "Nhap bac cua da thuc: ";
        is >> a.bac;
        a.hs = new double[a.bac+1];
        for(int i = 0; i <= a.bac; i++) {
            cout << "Nhap he so a[" << i << "]: ";
            is >> a.hs[i];
        }
        return is;
    }
    friend ostream& operator << (ostream& os, DT a) {
        if(a.hs[0] != 0) os << a.hs[0];
        for(int i = 1; i <= a.bac; i++) {
            if(a.hs[i] != 0 ){
                if(a.hs[i] > 0){
                    os << " + ";
                    os << setprecision(1) << fixed << a.hs[i] << "*x^" << i;
                } 
                else os << setprecision(1) << fixed << a.hs[i] << "*x^" << i;
            } 
        }
        return os;
    }

    friend double Calc(DT a, double &x) {
        cout << "\nNhap gia tri ban muon tinh: ";
        cin >> x;
        double sum = 0;
        for(int i = 0; i <= a.bac; i++) {
            sum += a.hs[i] * pow(x, i);
        }
        return sum;
    }

    double DaoHam (int x) {
        double sum = 0;
        for(int i = 1; i < bac; i++) {
            sum += i*hs[i]*pow(x, i-1);
        }
       return sum;
    }

    ~DT(){};
};
int main() {
    DT x;
    cout << "Nhap da thuc thu nhat: " << endl;
    cin >> x;
    cout << x;
    double a;
    cout << "\nGia tri da thuc tai " << a << " la: " << setprecision(2) << fixed << Calc(x, a);
    cout << "\nNhap da thuc thu hai: " << endl;
    DT y;
    cin >> y;
    cout << y;
    cout << "\nNhap d1 va d2: " << endl;
    double d1, d2;
    cin >> d1 >> d2;
    cout << "\nS = " << setprecision(2) << fixed << sqrt(x.DaoHam(d1) + y.DaoHam(d2));
    return 0;
}