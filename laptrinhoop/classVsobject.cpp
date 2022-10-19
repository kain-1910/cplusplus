#include<bits/stdc++.h>
using namespace std;

// Định nghĩa class
// Trong một class thường gồm các thuộc tính (properties) 
// và các phương thức (method) liên quan đến các thuộc tính đó.
// Class có 2 keyword: 
// private: không thể truy cập vào các thuộc tính
// public: có thể truy cập vào các thuộc tính

class Student {
    public:
    // Properties
    string name;
    int age;
    string addrres;
    string Id;
    double mark;

    // Tạo hàm tạo , hàm hủy
    // Trong hàm có thể có tham số hoặc không, số lượng tham số có thể nhiều hơn 1
    // Khi tên tham số trùng với tên thuộc tính thì dùng con trỏ this 
    // để thể hiện đâu là thuộc tính.
    // Hàm tạo có thể nhiều hơn 1, hàm hủy chỉ có 1
    // Hàm hủy thường sẽ ở cuối class
    Student() {
        // Hàm không có tham số thì có thể dùng con trỏ this tùy ý.
        this->name = name;
        age = 0;
        Id = '\0';
        this->mark = 0;
    }

    Student(string name, int age) {
        // Dùng con trỏ this để phân biệt thuộc tính với tham số
        this->name = name;
        this->age = age;
        Id = '\0';
    }
    // Method
    void showIdCard(){

    }

    void study(string subject){

    }

    void doExample(string subject){

    }

    void payFee(double money) {

    }

    // Hàm hủy
    ~Student() {
        
    }
};

int main(){
    // Tạo object
    Student s1;
    // Chỉ khi nào có keyword public thì mới có thể truy cập vào các thuộc tính
    cout << "Enter your name: ";
    getline(cin, s1.name);
    s1.age = 19;
    s1.addrres = "giao thuy, nam dinh";
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Addrres: " << s1.addrres << endl;
    return 0;
}