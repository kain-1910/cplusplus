#include<bits/stdc++.h>
using namespace std;

class MH{
private:
    string code, name;
    int num;
public:
    void Nhap(){
        cout << "Nhap ma mon: ";
        cin.ignore();
        cin >> code;
        cout << "Nhap ten mon: ";
        cin >> name;
        cout << "Nhap so tin chi: ";
        cin >> num;
    }
    void Xuat() {
        cout << "Ma mon hoc: " << code << endl;
        cout << "Ten mon hoc: " << name << endl;
        cout << "So tin chi: " << num << endl;
    }
    int getNum(){
        return num;
    }
};

class DKHP {
private:
    string msv, namesv;
    MH *a;
public:
    void Nhap(int x){
        cout << "Nhap ten sinh vien: ";
        cin.ignore();
        getline(cin, namesv);
        cout << "Nhap ma sinh vien: ";
        cin >> msv;
        a = new MH[x];
        for(int i = 0; i < x; i++){
            a[i].Nhap();
        }
    }
    void Xuat(int x){
        cout << "Ten sinh vien: " << namesv << endl;
        cout << "Ma sinh vien: " << msv << endl;
        cout << "Nhung mon hoc sinh vien dang ki: " << endl;
        for(int i = 0; i < x; i++){
            a[i].Xuat();
        }
    }
    string getNameSv(){
        return namesv;
    }
    void getNumtinchi(int x, int &cnt){
        for(int i = 0; i < x; i++){
            cnt += a[i].getNum();
        }
        // return cnt;
    }
};
int main() {
    int m;
    cout << "Nhap so luong mon hoc: ";
    cin >> m;
    MH *a = new MH[m];
    for(int i = 0; i < m; i++){
        a[i].Nhap();
    }
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    DKHP b[n];
    int cnt[n] = {};
    int x;
    for(int i = 0; i < n; i++){
        cout << "Nhap so luong mon hoc sinh vien dang ki: ";
        cin >> x;
        b[i].Nhap(x);
        
    }
    for(int i = 0; i < n; i++){
        b[i].Xuat(x);
    }
    for(int i = 0; i < n; i++){
        int cnt = 0;
        b[i].getNumtinchi(x, cnt);
        cout << "Sinh vien " << b[i].getNameSv() << " da dang ki: " << cnt << endl;
    }
    return 0;
}
