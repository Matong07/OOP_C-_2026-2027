#include <bits/stdc++.h>

using namespace std;

class Trapezium {
 private:
  double a, b, h;

 public:
  void Input() {
    cout << "Nhap day lon cua hinh thang: ";
    cin >> a;
    cout << "Nhap day nho cua hinh thang: ";
    cin >> b;
    cout << "Nhap chieu cao cua hinh thang: ";
    cin >> h;
  }
  void Output() {
    cout << "Dien tich cua hinh thang do la: " << ((a + b) * h) / 2 << endl;
  }
};
int main() {
  Trapezium S1;
  S1.Input();
  S1.Output();
  return 0;
}
