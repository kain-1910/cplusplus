#include<bits/stdc++.h>
using namespace std;
class MH {
private:
    string ma;
    int dg;
public:
    MH() {
        dg = 0;
        ma = '\0';
    }
    void Nhap() {
        cout << "Nhap ma hang: ";
        cin >> ma;
        cout << "Nhap don gia: ";
        cin >> dg;
        cin.ignore();
    }
    void Xuat() {
        cout <<setw(4) << ma << setw(15) << dg << endl;
        cout << "--------------------" << endl;
    }
    string getMa() {
        return ma;
    }
    int GetDG() {
        return dg;
    }
    ~MH(){};
};

class HD {
private:
    string code, time;
    int sl;
public:\
    HD() {
        code = time = '\0';
        sl = 0;
    }
    void Nhap() {
        cout << "Nhap ma hang: ";
        cin >> code;
        cout << "Nhap so luong: ";
        cin >> sl;
        cin.ignore();
        cout << "Nhap thoi gian (x/y/z): ";
        cin >> time;
    }
    void Xuat() {
        cout <<setw(4) << code << setw(15) << sl << setw(17) << time << endl;
        cout << "-----------------" << endl;
    }
    string getCode() {
        return code;
    }
    string getTime() {
        return time;
    }
    int getSl() {
        return sl;
    }
};
int main() {
    int m, n;
    cout << "Nhap so luong mat hang: ";
    cin >> m;
    MH a[m];
    cout << "Nhap so luong hoa don: ";
    cin >> n;
    cin.ignore();
    HD b[n];
    // MH
    cout << "Nhap mat hang: " << endl;
    for(int i = 0; i < m; i++) {
        a[i].Nhap();
    }
    cout << "Danh sach mat hang: " << endl;
    cout <<setw(4) << "Ma hang" << setw(15) << "Don gia" << endl;
    for(int i = 0; i < m; i++) {
        a[i].Xuat();
    }
    // HD
    cout << "Nhap hoa don: " << endl;
    for(int i = 0; i < n; i++) {
        b[i].Nhap();
    }
    cout << "Danh sach hoa don: " << endl;
    cout <<setw(4) << "Ma hang" << setw(15) << "So luong" << setw(15) << "Thoi gian"  << endl;
    for(int i = 0; i < n; i++) {
        b[i].Xuat();
    }
    map<string, int> mp;
    for(int i = 0; i < n; i++) {
       mp[b[i].getCode()] += b[i].getSl();
    }
    int cnt = 0;
    for(auto x : mp) {
        if(x.second > 10) cnt++;
    }
    if(cnt == 0) cout << "Khong co hoa don co so luong > 10" << endl;
    else cout << "Co " << cnt << " hoa don co so luong > 10" << endl;
    string s;
    cout << "Nhap ngay ban muon kiem tra(x/y/z): ";
    cin >> s;
    int sum = 0;
    int ok = 0;
    for(int i = 0; i < n; i++) {
        if(b[i].getTime() == s) {
            for(int j = 0; j < m; j++) {
                if(b[i].getCode() == a[j].getMa()){
                    sum += b[i].getSl() * a[i].GetDG();
                }
            }
            ok = 1;
        }
    }
    if(ok == 0) cout << "So tien ban trong ngay " << s << " la: " << 0 << " VND" << endl;
    else cout << "So tien ban trong ngay " << s << " la: " << sum << " VND" << endl;
    return 0;


}