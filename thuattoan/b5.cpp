#include<bits/stdc++.h>
using namespace std;

class Sv {
private:
    string msv, name, address, sex;
    int d, m, y;
public:
    Sv() {
        msv = name = address = sex = "";
        d = m = y = 0;
    }

    friend istream& operator >> (istream& is, Sv& a){
        cout << "Nhap ten: ";
        getline(is, a.name);
        cout << "Nhap Msv: ";
        is >> a.msv;
        cout << "Nhap dia chi: ";
        is.ignore();
        getline(is, a.address);
        cout << "Nhap gioi tinh: ";
        getline(is, a.sex);
        cout << "Nhap ngay sinh: ";
        is >> a.d >> a.m >> a.y;
        is.ignore();
        return is;
    }

    friend ostream& operator << (ostream& os, Sv a){
        os << a.msv << " " << a.name << " " << a.address << " " << a.sex << endl << a.d << " " << a.m << " " << a.y << endl;
        return os;
    }


}; 
int main() {
    list<Sv> a;
    cout << "Nhap so luong sinh vien: ";
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++) {
        Sv x;
        cin >> x;
        a.push_back(x); 
    }
    cout << "Danh sach sinh vien la: " << endl;
    for(list<Sv>::iterator it = a.begin(); it != a.end(); it++){
        cout << *it;
    }
    int c;
    do{
        cout << "Chon thao tac: " << endl;
        cout << "0--> Khong lam gi ca" << endl;
        cout << "1--> Them sinh vien vao cuoi" << endl;
        cout << "2--> Them sinh vien vao dau" << endl;
        cin >> c;
        cin.ignore();
        if(c == 1){
            Sv tmp;
            cin >> tmp;
            a.push_back(tmp);
            // break;
        }
        else if(c == 2){
            Sv tmp;
            cin >> tmp;
            a.insert(a.begin(), tmp);
            // break;
        }
        else break;
    }while(c != 0);
    cout << "Danh sach sinh vien la: " << endl;
    for(list<Sv>::iterator it = a.begin(); it != a.end(); it++){
        cout << *it;
    }
    return 0;
}