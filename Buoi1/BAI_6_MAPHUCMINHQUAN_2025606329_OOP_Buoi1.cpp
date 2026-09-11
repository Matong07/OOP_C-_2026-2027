#include <bits/stdc++.h>
using namespace std;

class Student {
 private:
  string name, sex, morality;
  struct {
    int day;
    int month;
    int year;
  } date;
  double average_score;

 public:
  void Input() {
    cout << "Nhap thong tin cua sinh vien vao " << endl;
    cout << "Ho va ten: ";
    getline(cin, name);
    cout << "Gioi tinh: ";
    getline(cin, sex);
    cout << "Ngay thang nam sinh: " << endl;
    cout << "Ngay: ";
    cin >> date.day;
    cout << "Thang: ";
    cin >> date.month;
    cout << "Nam: ";
    cin >> date.year;
    cout << "Diem trung binh: ";
    cin >> average_score;
    cout << "Xep loai dao duc: ";
    cin.ignore();
    getline(cin, morality);
  }
  void Output() {
    cout << "    " << name << "                " << date.day << "/"
         << date.month << "/" << date.year << "         " << 2026 - date.year
         << "           " << sex << "           " << average_score
         << "         " << morality << endl;
  }
};
int main() {
  Student A1;
  A1.Input();
  cout << "    THONG TIN HOC SINH    " << endl;
  cout << "    Ho va ten                       Nam sinh              Tuoi      "
          "       Gioi "
          "tinh           Diem trung binh                  Xep loai dao duc    "
          "  "
       << endl;
  A1.Output();
  return 0;
}
