#include<bits/stdc++.h>
using namespace std;

class CTY {
private:
    string name;
    int year;
public:
    CTY() {
        name = "";
        year = 0;
    }

    void nhap() {
        cout << "Nhap ten: ";
        cin.ignore();
        getline(cin, name);
        cout << "Nhap nam thanh lap:";
        cin >> year;
    }

    string getName() {
        return name;
    }

    int getYear() {
        return year;
    }
};

class CTYPM : public CTY {
private:
    int people;
public:
    void nhap() {
        CTY::nhap();
        cout << "Nhap so lap trinh vien: ";
        cin >> people;
    }
    void Check() {
        if(getYear() > 2000 && people > 20) {
            cout << getName() << endl;
        }
    }
};

class CTYVT : public CTY {
private:
    int car;
public:
    void nhap() {
        CTY::nhap();
        cout << "Nhap so oto:";
        cin >> car;
    }
    void Check1() {
        if(getYear() < 2000 && car < 10) {
            cout << getName() << endl;
        }
    }
};

int main() {
    cout << "Nhap so luong 2 cong ti:" << endl;
    int n, m;
    cin >> n >> m;
    CTYPM a[n];
    CTYVT b[m];
    cout << "Nhap thong tin CTYPM:" << endl;
    for(int i = 0; i < n; i++) a [i].nhap();

    cout << "Nhap thong tin CTYVT:" << endl;
    for(int i = 0; i < m; i++) b[i].nhap();

    cout << "Nhung CTYPM can tim la: " << endl;
    for(int i = 0; i < n; i++) {
        a[i].Check();
    }
    cout << "Nhung CTYVt can tim la: " << endl;
    for(int i = 0; i < m; i++) {
        b[i].Check1();
    }
    return 0;
}