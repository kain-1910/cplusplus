#include<bits/stdc++.h>
using namespace std;
class DS {
private:
    int n;
    int *pt;
public:
    // DS(){
    //     n = 0;
    //     *pt = 0;
    // }
    friend istream& operator >> (istream& is, DS &a){
        cout << "Nhap so luong phan tu: ";
        is >> a.n;
        a.pt = new int[a.n];
        for(int i = 0; i < a.n; i++){
            cout << "Nhap a" << i+1 << ": ";
            is >> a.pt[i];
        }
        return is;
    }
    friend ostream& operator << (ostream& os, DS a){
        os << "Day so ban vua nhap la: " << endl;
        for(int i = 0; i < a.n; i++){
            os << a.pt[i] << " ";
        }
        return os;
    }
    double TBC(){
        double sum = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(pt[i] > 0){
                sum += pt[i];
                cnt++;
            }
        }
        return 1.0*sum/cnt;
    }
    void Check(){
        for(int i = 0; i < n; i++){
            if(sqrt(pt[i]) == (int) sqrt(pt[i])){
                cout << pt[i] << " ";
            } 
        }
    }
};

int main(){
    DS a;
    cin >> a;
    cout << a << endl;
    cout << "TBC: " << setprecision(2) << fixed << a.TBC() << endl;
    cout << "Nhung so chinh phuong la: ";
    a.Check();
    return 0;
}