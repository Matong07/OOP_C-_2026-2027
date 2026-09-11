#include <bits/stdc++.h>
using namespace std;

class Canbo {
 private:
  string name, mcb;
  struct {
    int day;
    int month;
    int year;
  } date;
  int Days;
  long long Luong;

 public:
  void Input() {
    cout << "Nhap thong tin can bo" << endl;
    cout << "Ma can bo: ";
    getline(cin, mcb);
    cout << "Ho va ten: ";
    getline(cin, name);
    cout << "Ngay thang nam sinh: " << endl;
    cout << "Ngay: ";
    cin >> date.day;
    cout << "Thang: ";
    cin >> date.month;
    cout << "Nam: ";
    cin >> date.year;
    cout << "So ngay lam trong thang: ";
    cin >> Days;
  }
  long long Tinhluong() {
    Luong = Days * 250000;
    return Luong;
  }
  void Output() {
    cout << "THONG TIN CAN BO: " << name << endl;
    cout << "Ngay sinh: " << date.day << "/" << date.month << "/" << date.year
         << endl;
    cout << "So ngay lam viec trong thang: " << Days << endl;
    cout << "Luong : " << Tinhluong() << endl;
  }
};
int main() {
  Canbo A1;
  A1.Input();
  A1.Output();
  return 0;
}