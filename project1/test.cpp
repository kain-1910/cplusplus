#include <bits/stdc++.h>
#include"slist.cpp"
using namespace std;

class DT {
private:
    int bac;
    int *hs;
public:
    DT() {
        this->bac = 0;
        this->hs = new int[bac +1];
    }
    friend istream& operator >> (istream& is, DT& a){
        do{
            cout << "Nhap bac cua da thuc: ";
            is >> a.bac;
            if(a.bac < 1) cout << "Khong hop le!!!" << endl;
        }while(a.bac < 1);

        a.hs = new int[a.bac + 1];
        for(int i = 0; i <= a.bac; i++){
            cout << "Nhap he so a" << i << ": ";
            is >> a.hs[i];
        }
        return is;
    }
    friend ostream& operator << (ostream& os, DT a){
        os << a.hs[0];
        for(int i = 1; i <= a.bac; i++){
            if(a.hs[i] != 0){
                if(a.hs[i] > 0) cout << "+";
                os << a.hs[i] << "*x^" << i;
            }
        }
        os << endl;
        return os;
    }
// Phương thức tính giá trị tại x
    int Total(int &x) {
        cout << "Nhap gia tri x: ";
        cin >> x;
        int cnt = 0;
        for(int i = 0; i <= this->bac; i++) {
            cnt += this->hs[i]*pow(x,i);
        }
        return cnt;
    }
// Tổng 2 đa thức
    DT operator + (DT y){
        DT kq;
        kq.bac = this->bac?this->bac:y.bac;
        kq.hs = new int[kq.bac + 1];
        for (int i = 0; i <= kq.bac; i++){
            if(i <= this->bac && i <= y.bac) kq.hs[i] = this->hs[i] + y.hs[i];
			else kq.hs[i] = i <= this->bac?this->bac:y.bac;
        }
        return kq;
    }
// Hiệu 2 đa thức
    DT operator - (DT y){
        DT kq;
        int ok = 0;
        kq.bac = this->bac?this->bac:y.bac;
        kq.hs = new int[kq.bac + 1];
        for (int i = 0; i <= kq.bac; i++){
            if(i <= this->bac && i <= y.bac) kq.hs[i] = this->hs[i] - y.hs[i];
			else kq.hs[i] = i <= this->bac?this->bac:y.bac*-1;
        }
        
        return kq;
    }
// Tích của hai đa thức
    DT operator * (DT y) {
        DT kq;
        int ok = 0;
        kq.bac = bac+y.bac;
        kq.hs = new int[kq.bac+1];
        for(int i = 0; i <= kq.bac; i++) {
            kq.hs[i] = 0;
            for(int j = 0; j <= bac; j++) {
                if(i>=j && i-j<=y.bac) kq.hs[i]+= hs[j]*y.hs[i-j];
            }
        }
        return kq;
    }
};
// Thương của hai đa thức

    DT operator / (DT y) {
        DT kq;
        DT du = y;
        int cnt = 0;
        while(du.bac < y.bac) {
            
             
        }
    }

int main()
{
	ios::sync_with_stdio();cin.tie(NULL);cout.tie(NULL);
	slist<DT> L;
    DT x;
    cout << "Nhap da thuc thu nhat: " << endl;
    cin >> x;
    cout << x;
    L.push_back(x);
    cout << "Nhap da thuc thu hai: " << endl;
    DT y;
    cin >> y;
    cout << y;
    L.push_back(y);
    DT sum = L.front();
    DT sub = L.front();
    DT tich = L.front();
    L.pop_front();
    while(!L.empty()){
        sum =  L.front() + sum;
        sub = sub - L.front();
        tich = tich*L.front();
        L.pop_front();
    }
    cout << "Tong hai da thuc la: " << sum << endl;
    cout << "Hieu hai da thuc la: " << sub << endl;
    cout << "Tich hai da thuc la: " << tich << endl;
    // Ghi ra file
    // fstream output;
    // output.open("main.txt", ios::out);
    // output << "Tong hai da thuc la: " << sum << endl;
    // output << "Hieu hai da thuc la: " << sub << endl;
    // output << "Tich hai da thuc la: " << tich << endl;
	return 0;
}


