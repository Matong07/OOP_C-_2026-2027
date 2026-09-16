#include <bits/stdc++.h>
using namespace std;

class Date {
 private:
  int day, month, year;

 public:
  void Input() {
    cout << "Ngay: ";
    cin >> day;
    cout << "Thang: ";
    cin >> month;
    cout << "Nam: ";
    cin >> year;
  }
  void Output() { cout << day << "/" << month << "/" << year << endl; }
};
class Car {
 private:
  string brand;
  Date time;
  long long price;
  int quantity;

 public:
  void Input() {
    cout << "\t\tNhap thong tin cua chiec xe: " << endl;
    cout << "Hang xe: ";
    getline(cin, brand);
    cout << "Nam san xuat: " << endl;
    time.Input();
    cin.ignore();
    cout << "Gia xe: ";
    cin >> price;
    cout << "So luong: ";
    cin >> quantity;
    cin.ignore();
  }
  void Output() {
    cout << "\t\t\tThong tin chiec xe" << endl;
    cout << "Hang xe: " << brand << endl;
    cout << "Ngay san xuat: ";
    time.Output();
    cout << "Gia: " << price << endl;
    cout << "So luong: " << quantity << endl;
  }
};
int main() {
  Car x;
  x.Input();
  x.Output();
  return 0;
}
