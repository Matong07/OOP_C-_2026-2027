#include <bits/stdc++.h>
using namespace std;

class Circle {
 private:
  double r;

 public:
  void Input() {
    cout << "Nhap ban kinh cua hinh tron: ";
    cin >> r;
  }
  void Output() {
    cout << "Chu vi cua hinh tron la: " << 2 * r * M_PI << endl
         << "Dien tich cua hinh tron do la: " << pow(r, 2) * M_PI << endl;
  }
};
int main() {
  Circle C1;
  C1.Input();
  C1.Output();
  return 0;
}
