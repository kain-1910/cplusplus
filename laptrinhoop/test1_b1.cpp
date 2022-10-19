#include<bits/stdc++.h>
using namespace std;

class Point {
private:
    double x, y;
public:
    Point(){
        x=y=0;
    }
    friend istream& operator >> (istream& is, Point &a){
        cout << "Nhap hoanh do: ";
        is >> a.x;
        cout << "Nhap tung do: ";
        is >> a.y;
        return is;
    }
    friend ostream& operator << (ostream& os, Point &a){
        os << "(" << setprecision(1) << fixed << a.x << "," << setprecision(1) << fixed << a.y << ")";
        return os;
    }

    void Nhap(Point &a){
        cin >> a;
    }

    void Xuat(Point a){
        cout << a << endl;
    }

    double Kc(){
        return sqrt(this->x*this->x + this->y*this->y);
    };

    double Kc1(Point b){
        return sqrt(pow(this->x-b.x, 2) + pow(this->y-b.y, 2));
    }

    friend double Kc2(Point a, Point b){
        return sqrt(pow(a.x-b.x, 2) + pow(a.y-b.y, 2));
    }
};

int main () {
    Point a, b;
    a.Nhap(a);
    b.Nhap(b);
    a.Xuat(a);
    b.Xuat(b);
    cout << a.Kc() << endl;
    cout << a.Kc1(b) << endl;
    cout << Kc2(a, b) << endl;
    return 0;
}