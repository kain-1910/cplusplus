#include<bits/stdc++.h>
using namespace std;
class Product{
private:
    string name, code, nsx;
    int quantity, money;
public:
    Product(){
        name = code = nsx = "";
        quantity = money = 0;
    }
    string getName(){
        return name;
    }
    string getCode(){
        return code;
    }
    string getNsx(){
        return nsx;
    }
    int getQuantity(){
        return quantity;
    }
    int getMoney(){
        return money;
    }
    void Nhap(){
        cout << "Nhap ten hang: ";
        cin.ignore();
        getline(cin, name);
        cout << "Nhap ma hang: ";
        cin >> code;
        cout << "Nhap ten nha san xuat: ";
        cin.ignore();
        getline(cin, nsx);
        cout << "Nhap so luong: ";
        cin >> quantity;
        cout << "Nhap don gia: ";
        cin >> money;
    }
    void Xuat() {
        cout << "Ten san pham: " << name << endl;
        cout << "Ma: " << code << endl;
        cout << "Nha san xuat: " << nsx << endl;
        cout << "So luong: " << quantity << endl;
        cout << "Don gia: " << money << endl;
    }
};

class Computer : public Product {
private:
    string cpu, hdh;
    int weight;
public:
    void Nhap(){
        Product::Nhap();
        cout << "Nhap loai CPU: ";
        cin >> cpu;
        cout << "Nhap he dieu hanh: ";
        cin >> hdh;
        cout << "Nhap trong luong: ";
        cin >> weight;
        // cout << "---------------" << endl;
    }
    string getCPU(){
        return cpu;
    }
    string getHDH(){
        return hdh;
    }
    int getWeight(){
        return weight;
    }
    void Xuat(){
        Product::Xuat();
        cout << "Loai CPU: " << cpu << endl;
        cout << "He dieu hanh: " << hdh << endl;
        cout << "Trong luong: " << weight << endl;
        cout << "-------------" << endl;
    }

};
int main() {
    int n;
    cout << "Nhap so luong may tinh: ";
    cin >> n;
    Computer a[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap san pham thu " << i+1 << endl;
        a[i].Nhap();
    }

    cout << "-----Danh sach san pham la:-----" << endl << endl;
    for(int i = 0; i < n; i++){
        a[i].Xuat();
        cout << endl;
    }
    cout << "----------------" << endl;
    cout << "Nhap ma hang san pham ban muon tim: " << endl;
    string s;
    cin >> s;
    cout << "San pham ban muon tim la: " << endl;
    int ok = 0;
    for(int i = 0; i < n; i++){
        if(s == a[i].getCode()){
            a[i].Xuat();
            ok = 1;
        }
    }
    if(ok == 0) cout << "San pham ban muon tim khong co!!!" << endl;
    cout << "----------------" << endl;
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max <= a[i].getMoney()) max = a[i].getMoney();
    }
    cout << "Nhung san pham co don gia cao nhat la: " << endl;
    for(int i = 0; i < n; i++){
        if(max == a[i].getMoney()) a[i].Xuat();
    }
    return 0;
}