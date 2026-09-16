#include <bits/stdc++.h>
using namespace std;

class NSX {
 private:
  string maNSX, tenNSX, dcNSX;
  friend class Hang;
};
class Hang {
 private:
  string maHang, tenHang;
  long donGia, trongLuong;
  NSX x;

 public:
  void Input() {
    cout << "\t\tNhap thong tin cho hang hoa" << endl;
    cout << "Ma nha san xuat: ";
    getline(cin, x.maNSX);
    cout << "Ten nha san xuat: ";
    getline(cin, x.tenNSX);
    cout << "Dia chi nha san xuat: ";
    getline(cin, x.dcNSX);
    cout << "Ma Hang: ";
    getline(cin, maHang);
    cout << "Ten Hang: ";
    getline(cin, tenHang);
    cout << "Don gia: ";
    cin >> donGia;
    cout << "Trong luong: ";
    cin >> trongLuong;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  void Output() {
    cout << "\t\t\t Thong tin mat hang: " << endl;
    cout << "Nha san xuat: " << x.tenNSX << endl;
    cout << "Ma nha san xuat: " << x.maNSX << endl;
    cout << "Dia chi: " << x.dcNSX << endl;
    cout << "Ten Hang: " << tenHang << endl;
    cout << "Ma hang: " << maHang << endl;
    cout << "Don gia: " << donGia << endl;
    cout << "Trong luong: " << trongLuong << endl;
  }
};
int main() {
  Hang x;
  x.Input();
  x.Output();
  return 0;
}