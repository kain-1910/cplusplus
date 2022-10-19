#include<bits/stdc++.h>
using namespace std;

class Point {
private:
    double x, y;
public:
    Point() {
        x=y=0;
    }

    void Input() {
        cin >> x >> y;
    }

    void Display() {
        cout << "(" << x << "," << y << ")" << endl;
    }

    void setX(double x){
        this->x = x;
    }

    void setY(double y){
        this->y = y;
    }
    double getX() {
        return x;
    }

    double getY() {
        return y;
    }

    float distance(Point a) {
        return sqrt(a.x*a.x + a.y*a.y);
    }

};

int main() {
    int n;
    cout << "Nhap so diem: ";
    cin >> n;
    Point a[n];
    return 0;
}