#include<bits/stdc++.h>
using namespace std;
// class: lớp
// attribute: thuộc tính
// method, behavior: phương thức
// object: đối tượng
// Các access modifier:
    // private
    // public
    // protected
// biến static
// biến static là biến dùng chung cho class, nếu khai báo nhiều object thì nõ vẫn dùng chung một biến static

// friend function: cho phép một hàm ngoài không phải là phương thức của class truy cập vào các thuộc tính của class
// Phải ghi friend tên function vào trong class rồi mới code ở bên ngoài
class Student {
private:
    string id, ten, ns;
    double gpa;
    static int cnt;
    // Không thể gán ngay giá trị cho biến static (cnt = 0);

    // Friend Function
    friend void inthongtin(Student);
public:
    void xinChao();
    void diHoc();
};

void inthongtin(Student x){
    cout << x.id << " " << x.ten;
}

// gán gia trị cho biến static
int Student::cnt = 0;

void Student::xinChao() {
    cout << "hello";
}


int main() {

    return 0;
}