#include<bits/stdc++.h>
using namespace std;

class Time {
private:
    int hour, minute, second;
public:
    Time() {
        hour=minute=second = 0;
    }

    void Set() {
        cout << "Nhap thoi gian:\n";
        cin >> hour >> minute >> second;
    }
    
    void setHour(int h) {
        this->hour = h;
    }
    void setMinute(int m) {
        this->minute = m;
    }
    void setSecond(int s) {
        this->second = s;
    }

    int getHour() {
       return hour;
    }

    int getMinute() {
        return minute;
    }

    int getSecond() {
        return second;
    }

    void Display() {
        cout << "Thoi gian la:" << endl;
        if(hour < 10) cout << '0';
        cout << hour << ":";
        if(minute < 10) cout << '0';
        cout << minute << ":";
        if(second < 10) cout << '0';
        cout << second;
    }
};

int main() {
    Time a;
    a.Set();
    a.getHour();
    a.getMinute();
    a.getSecond();
    a.Display();
    return 0;
}