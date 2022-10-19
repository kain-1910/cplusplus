#include<bits/stdc++.h>
using namespace std;
// Inheritance in OOP
// base class: class cha
// derived class: class con
// Khi dùng kế thừa trong OOP, class con sẽ kế thừa các thuộc tính và các phương thức của class cha
// Class con có thế thêm thuộc tính và các phương thức khác
class Person {
private:
    string name, address;
public:

    Person(string name, string address) {
        this->name = name;
        this->address = address;
    }
    string getName() {
        return name;
    }
    string getAddress() {
        return address;
    }
    void setName(string name) {
        this->name = name;
    }
    void setAddress(string address) {
        this->address = address;
    }
    void nhap() {
        getline(cin, name);
        getline(cin, address);
    }
    void in() {
        cout << name << endl << address << endl;
    }
};
// Cách kế thừa:
// class Student kế thừa class Person
class Student : public Person {
private:
    double gpa;
public:
    void setGpa(double gpa) {
        this->gpa = gpa;
    }
    double getGpa() {
        return gpa;
    }
    // Ghi đè hàm (Function Overiding)
    // Ghi đè hàm chỉ dùng được khi hàm cần ghi đè ở class con giống với class cha (Giống cả về tên và tham số)
    // Gọi hàm tạo trong class con
    Student(string name, string address, double gpa) : Person(name, address){
        this->gpa = gpa;
    }

    void nhap() {
        Person::nhap();
        cin >> gpa;
    }
    void in() {
        Person::in();
        cout << fixed << setprecision(2) << gpa << endl;
    }
};

class Student2 : public Student {
private:
    int age;
public:
    void setAge(int age) {
        this->age = age;
    }
    int getAge() {
        return age;
    }
    void nhap() {
        Student::nhap();
        cin >> age;
    }
    void in() {
        Student::in();
        cout << age << endl;
    }
};

int main() {
    Student s("Pham Van Cong", "nam Dinh", 10);
    s.in();
    return 0;
}
