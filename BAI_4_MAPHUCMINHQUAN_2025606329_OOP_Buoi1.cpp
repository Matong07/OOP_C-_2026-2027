#include <bits/stdc++.h>
using namespace std;

class Linear_equation_in_two_variables {
 private:
  double a, b, c;

 public:
  void Input() {
    cout << "Phuong trinh bac nhat 2 an co dang ax^2 + bx + c = 0" << endl;
    do {
      cout << "Nhap he so a cho phuong trinh (a > 0): ";
      cin >> a;
    } while (a <= 0);
    cout << "Nhap he so b cho phuong trinh: ";
    cin >> c;
    cout << "Nhap he so c cho phuong trinh: ";
    cin >> c;
  }
  void Output() {
    double delta = pow(b, 2) - (4 * a * c);
    if (delta < 0) {
      cout << "Phuong trinh vo nghiem" << endl;
      return;
    }
    if (delta == 0) {
      cout << "Phuong trinh co nghiem kep: x1 = x2 = " << (-b) / (2 * a)
           << endl;
      return;
    }
    if (delta > 0) {
      cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
      cout << "x1 = " << ((-b) + sqrt(delta)) / (2 * a) << endl;
      cout << "x2 = " << ((-b) - sqrt(delta)) / (2 * a) << endl;
      return;
    }
  }
};
int main() {
  Linear_equation_in_two_variables A1;
  A1.Input();
  A1.Output();
  return 0;
}