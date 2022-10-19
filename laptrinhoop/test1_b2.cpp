#include<bits/stdc++.h>
using namespace std;

class Date {
private:
    int day, month, year;
public:

    void Init() {
        day=month=year = 0;
    }

    friend istream& operator >> (istream& is, Date &a){
        cout << "Nhap ngay: ";
        is >> a.day;
        cout << "Nhap thang: ";
        is >> a.month;
        cout << "Nhap nam: ";
        is >> a.year;
        return is;
    }
    friend ostream& operator << (ostream& os, Date &a){
        if(a.day < 10){
            os << 0 << a.day << "/";
        }
        else {
            os << a.day << "/";
        }
        if(a.month < 10){
            os << 0 << a.month << "/" << a.year << endl;
        }
        else {
            os << a.month << "/" << a.year << endl;
        }
        return os;
    }

    bool Check() {
        if(month != 2){
            if(month <= 0 || month > 12) return false;
            else {
                if(month == 4 || month == 6 || month == 9 || month == 11){
                    if(day <= 0 || day > 30) return false;
                    else return true;
                }
                else{
                    if(day <= 0 || day > 31) return false;
                    else return true;
                }
            }
        }
        else {
            if(year % 4 != 0) {
                if(day <= 0 || day > 28) return false;
                else return true;
            }
            else {
                if(day <= 0 || day > 29) return false;
                else return true;
            }
        }
    }
    void Ktra () {
        if(this->month != 2){
            if(this->month < 12){
                if(this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11){
                    if(this->day < 30) this->day++;
                    else{
                        this->day = 1;
                        this->month++;
                    }
                }
                else {
                    if(this->day < 31) this->day++;
                    else{
                        this->day = 1;
                        this->month++;
                    }
                }
            }
            else {
                this->day = 1;
                this->month = 1;
                this->year++;
            }
        }

        else {
            if(year % 4 != 0) {
                if(this->day < 28) this->day++;
                else{
                    this->day = 1;
                    this->month++;
                }
            }
            else {
                if(this->day < 29) this->day++;
                else{
                    this->day = 1;
                    this->month++;
                }
            }
        }
    }
};

int main () {
    Date a, x;
    cin >> a;
    cout << a;
    if(a.Check() == true) cout << "Thong tin hop le" << endl;
    else cout << "Thong tin sai, moi nhap lai!!!" << endl;
    if(a.Check() == true){
        a.Ktra();
        cout << "Ngay tiep theo la: " << a;
    } 
    return 0;
}