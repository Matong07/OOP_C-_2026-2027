#include <bits/stdc++.h>
using namespace std;
class Triangular {
 private:
  double a, b, c;

 public:
  void Input() {
    cout << "De tinh duoc chu vi, dien tich cua tam giac can nhap do dai cac "
            "canh!!"
         << endl;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
  }
  void Output() {
    cout << "Chu vi cua tam giac la: " << a + b + c << endl;
    double p = (a + b + c) / 2;
    cout << "Dien tich cua tam giac la: "
         << (double)sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
  }
};

int main() {
  Triangular A1;
  A1.Input();
  A1.Output();
  return 0;
}