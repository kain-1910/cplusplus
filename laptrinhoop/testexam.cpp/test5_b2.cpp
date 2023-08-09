#include<bits/stdc++.h>
using namespace std;

class Xe {
private:
   int tl;
   string bs;
public:
    Xe() {
        bs = tl = 0;
    }
    string getBs() {
        return bs;
    }
    int getTl() {
        return tl;
    }
    void Nhap() {
        cin.ignore();
        cout << "Nhap bien so: ";
        cin >> bs;
        cout << "Nhap trong luong: ";
        cin >> tl;
    }
    void Xuat() {
        cout << "Bien so: " << bs << endl;
        cout << "Trong luong: " << tl << endl;
    }
};

class Xe_Bus : public Xe {
private: 
    int cn;
public:
    int getCn() {
        return cn;
    }
    void Nhap() {
        Xe::Nhap();
        cout << "Nhap cho ngoi: ";
        cin >> cn;
    }
    void Xuat() {
        Xe::Xuat();
        cout << "Cho ngoi: " << cn << endl;
    }
};

class Xe_Tai : public Xe {
private: 
    int tt;
public:
    int getTt() {
        return tt;
    }
    void Nhap() {
        Xe::Nhap();
        cout << "Nhap tai trong: ";
        cin >> tt;
    }
    void Xuat() {
        Xe::Xuat();
        cout << "Tai trong: " << tt << endl;
    }
};

int main() {
    int n, m;
    cout << "Nhap so luong xe bus: "; cin >> n;
    cout << "Nhap so luong xe tai: "; cin >> m;
    Xe_Bus a[n];
    Xe_Tai b[m];
    cout << endl << "Nhap thong tin xe bus" << endl;
    for(int i = 0; i < n; i++) {
        a[i].Nhap();
    }

    cout << endl << "Nhap thong tin xe tai" << endl;
    for(int i = 0; i < m; i++) {
        b[i].Nhap();
    }
    cout << "Danh sach xe bus co nhieu hon 24 cho ngoi" << endl;
    for(int i = 0; i < n; i++) {
        if(a[i].getCn() > 24) {
            a[i].Xuat();
            cout << "---------------" << endl;
        }
    }
    cout << "Danh sach xe tai co tai trong lon hon 15 tan" << endl;
    for(int i = 0; i < m; i++) {
        if(b[i].getTt() > 15) {
            b[i].Xuat();
            cout << "---------------" << endl;
        }
    }
    return 0;
}