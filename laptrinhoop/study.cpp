#include<bits/stdc++.h>
using namespace std;
class Shape {
private:
    double l, h;
public:
    Shape() {
        l = h = 0;
    }
    void nhap() {
        cin >> l >> h;
    }
    double getWidth() {
        return l;
    }
    double getHeight() {
        return h;
    }
};

class Triangle : public Shape {
public:
    void nhap(){
        Shape::nhap();
    }
    double area() {
        return ((getWidth()*getHeight())/2);
    }
};

class Rectangle : public Shape {
public:
    void nhap(){
        Shape::nhap();
    }
    double area() {
        return ((getWidth()*getHeight()));
    }
};

int main() {
    Triangle a;
    a.nhap();
    Rectangle b;
    b.nhap();
    cout << a.area() << " " << b.area() << endl;
    return 0;
}