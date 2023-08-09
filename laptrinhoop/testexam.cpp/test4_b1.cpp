#include<bits/stdc++.h>
using namespace std;
class DT {
private:
    int bac;
    double *hs;
public:
    DT() {
        bac = 0;
        hs = new double[bac+1];
    }
    void Nhap() {
        cout << "Nhap bac cua da thuc: ";
        cin >> this->bac;
        hs = new double[bac+1];
        for(int i = 0; i <= bac; i++) {
            cout << "Nhap he so a[" << i << "]: ";
            cin >> hs[i];
        }
    }
    void Xuat() {
        if(hs[0] != 0) cout << hs[0];
        for(int i = 1; i <= bac; i++) {
            if(hs[i] != 0) {
                if(hs[i] > 0) cout << "+";
                cout << hs[i] << "*x^" << i; 
            }
        }
    }
    friend double Count(DT x, double y) {
        double cnt = 0;
        for(int i = 0; i <= x.bac; i++) {
            cnt += x.hs[i]*pow(y, i);
        }
        return cnt;
    }
    ~DT(){};
};
int main() {
    DT a;
    a.Nhap();
    a.Xuat();
    double x, y;
    cout << "\nNhap hai gia tri x, y: ";
    cin >> x >> y;
    cout << "Gia tri cua P(x) - P(y) la: ";
    cout << setprecision(2) << fixed << Count(a, x) - Count(a, y);
    return 0;
}