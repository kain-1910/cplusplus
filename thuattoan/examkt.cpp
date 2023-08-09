#include<bits/stdc++.h>
using namespace std;
class DG {
private:
    int maDG, year;
    string name, address;
public:
    DG() {
        year = maDG = 0;
        name = address = '\0';
    }
    void Nhap() {
        cout << "Nhap ma doc gia: ";
        cin >> this->maDG;
        cout << "Nhap ten doc gia: ";
        cin.ignore();
        getline(cin, this->name);
        cout << "Nhap nam sinh: ";
        cin >> this->year;
        cout << "Nhap dia chi: ";
        cin.ignore();
        getline(cin, this->address);
    }
    void Xuat() {
        cout << "Ma: " << this->maDG << endl;
        cout << "Ten: " << this->name << endl;
        cout << "Nam sinh: " << this->year << endl;
        cout << "Dia chi: " << this->address << endl;
        cout << "-----------" << endl;
    }
    void setMa(int x) {
        maDG = x;
    }
    void setName(string x) {
        name = x;
    }
    void setYear(int x) {
        year = x;
    }
    void setAddress(string x) {
        address = x;
    }
    int getMa() {
        return maDG;
    }
    int getYear() {
        return year;
    }
    string getName() {
        return name;
    }
    string getAddress() {
        return address;
    }
};
int main() {
    int n;
    cout << "Nhap so luong doc gia: ";
    cin >> n; 
    list<DG> L;
    for(int i = 0; i < n; i++) {
        DG a;
        a.Nhap();
        L.push_back(a);
    }
    cout << "1.In danh sach" << endl;
    cout << "2.Them doc gia" << endl;
    cout << "3.Xoa doc gia" << endl;
    cout << "4.Tim kiem" << endl;
    cout << "5.Sua doc gia" << endl;
    cout << "6.Sap xep" << endl;
    cout << "0.Thoat" << endl;
    do {
        int test;
        cout << "Nhap lua chon cua ban: ";
        cin >> test;
        switch(test) {
            case 1:
                // In danh sach
                cout << "Danh sach doc gia: " << endl;
                for(list<DG>::iterator it = L.begin(); it != L.end(); it++) {
                    (*it).Xuat();
                }
                break;
            case 2:
                // Them doc gia
                cout << "Nhap doc gia ban muon them: " << endl;
                DG b;
                b.Nhap();
                L.push_back(b);
                cout << "Danh sach sau khi them: " << endl;
                for(list<DG>::iterator it = L.begin(); it != L.end(); it++) {
                    (*it).Xuat();
                }
                break;
            case 3:
                // Xoa doc gia
                // int code;
                // cout << "Nhap ma doc gia ban muon xoa: ";
                // cin >> code;
                // for(auto it : L) {
                //     if(it.getMa() != code) {
                //        L.push_back();
                //     }
                //     L.pop_front();
                // }
                // cout << "Danh sach sau khi xoa: " << endl;
                // for(auto it : L) {
                //     it.Xuat();
                // }
                break;
            case 4:
                // Sua doc gia
                int code1;
                cout << "Nhap ma ban muon sua: ";
                cin >> code1;
                for(auto it : L) {
                    if(it.getMa() == code1) {
                        string name1;
                        cout << "Nhap ten ban muon sua: ";
                        cin.ignore();
                        getline(cin, name1);
                        it.setName(name1);

                        int year1;
                        cout << "Nhap nam sinh muon sua: ";
                        cin >> year1;
                        it.setYear(year1);

                        string address1;
                        cout << "Nhap dia chi ban muon sua: ";
                        cin.ignore();
                        getline(cin, address1);
                        it.setAddress(address1);
                        it.Xuat();
                    }
                }
                break;
            case 5:
                   // Tim kiem 
                    cout << "Nhap ma ban muon tim: ";
                    int code2;
                    cin >> code2;
                    int ok = 1;
                    for(auto it : L) {
                        if(it.getMa() == code2) {
                            ok = 1;
                            it.Xuat();
                        }
                    }
                    if(ok == 0) cout << "Khong co doc gia ban muon tim" << endl;
                    }
                    break;
            case 6:
                break;
            default:
                break;
    }
    }while(test != 0)
    

    // Sap xep
    // for(int i = 0; i < L.size()-1; i++) {
    //     int min = i;
    //     for(int j = i+1; j < L.size(); j++) {
    //         if(a[j].getMa() < a[min].getMa()) min = j;
    //     }
    //     swap(a[j], a[min]);
    // }
    // for(list<DG>::iterator it = L.begin(); it != L.end(); it++) {
    //     (*it).Xuat();
    // }
    return 0;
}
