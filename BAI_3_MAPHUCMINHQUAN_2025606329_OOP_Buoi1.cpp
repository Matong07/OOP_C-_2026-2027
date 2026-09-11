#include <bits/stdc++.h>
using namespace std;
class Linear_equation_in_one_variable {
 private:
  double a, b;

 public:
  void Input() {
    cout << "Phuong trinh bac nhat 1 an co dang ax + b = 0" << endl;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
  }
  void Output() {
    cout << "Nghiem cua phuong trinh do la: " << (-b) / a << endl;
  }
};
int main() {
  Linear_equation_in_one_variable A1;
  A1.Input();
  A1.Output();
  return 0;
}