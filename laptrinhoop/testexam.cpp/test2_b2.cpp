#include<bits/stdc++.h>
using namespace std;
class Xe{
private:
    string bs;
    int weight;
public: 
    void Nhap(){
        cout << "Nhap bien so xe: ";
        cin.ignore();
        getline(cin, bs);
        cout << "Nhap trong luong xe: ";
        cin >> weight;
    }
    void Xuat(){
        cout << "Bien so: " << bs << endl;
        cout << "Trong luong: " << weight << endl;
    }
    string getBS(){
        return bs;
    }
};

class XeBus : public Xe {
private: 
    int number;
public: 
    void Nhap(){
        Xe::Nhap();
        cout << "Nhap so cho ngoi: ";
        cin >> number;
    }
    void Xuat(){
        Xe::Xuat();
        cout << "So cho ngoi: " << number << endl;
        cout << "-----------" << endl;
    }
};

class XeTai : public Xe {
private: 
    int taitrong;
public: 
    void Nhap(){
        Xe::Nhap();
        cout << "Nhap tai trong: ";
        cin >> taitrong;
    }
    void Xuat(){
        Xe::Xuat();
        cout << "So tai trong: " << taitrong << endl;
        cout << "-----------" << endl;
    }
    int getTT(){
        return taitrong;
    }
};
int main() {
    int n, m;
    cout << "Nhap so luong xe bus: ";
    cin >> n;
    cout << "Nhap so luong xe tai: ";
    cin >> m;
    XeBus a[n];
    XeTai b[m];
    for(int i = 0; i < n; i++){
        cout << "Nhap thong tin xe bus thu " << i+1 << ":" << endl;
        a[i].Nhap();
    }
    cout << "-----Xe Bus------" << endl;
    for(int i = 0; i < n; i++){
        a[i].Xuat();
    }
    int max = -INT_MAX, t = 0;
    for(int i = 0; i < m; i++){
        cout << "Nhap thong tin xe tai thu " << i+1 << ":" << endl;
        b[i].Nhap();
        if(max < b[i].getTT() && b[i].getTT() <= 5000){
            t = 1;
            max = b[i].getTT();
        }
    }
    cout << "-----Xe Tai------" << endl;
    for(int i = 0; i < m; i++){
        b[i].Xuat();
    }
    cout << "Xe co tai trong lon nhat la: " << endl;
    for(int i = 0; i < m; i++){
        if(max == b[i].getTT()) b[i].Xuat();
    }
    if(t == 0) cout << "Khong co xe nao co tai trong duoi 5000kg" << endl;
    string s;
    cout << "Nhap bien so xe ban muon tim: ";
    cin.ignore();
    getline(cin, s);
    int ok = 0;
    cout << "Xe ban muon tim la: " << endl;
    for(int i = 0; i < n; i++){
        if(s == a[i].getBS()){
            a[i].Xuat();
            ok = 1;
            break;
        }
    }
    for(int i = 0; i < m; i++){
        if(s == b[i].getBS()){
            b[i].Xuat();
            ok = 1;
            break;
        }
    }
    if(ok == 0) cout << "Khong co xe ban muon tim!!!" << endl;
    return 0;
}
