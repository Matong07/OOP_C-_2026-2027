#include <bits/stdc++.h>
using namespace std;

class Hanghoa {
 private:
  int maHang;
  char tenHang[50];
  long tienTra;
  friend class PhieuMuaHang;
};
class PhieuMuaHang {
 private:
  int maPhieu;
  char tenKhach[30];
  int n;
  Hanghoa* a;

 public:
  void Input() {
    cout << "\t\t\t Nhap thong tin cho phieu mua hang:;" << endl;
    cout << "Ma phieu: ";
    cin >> maPhieu;
    cin.ignore();
    cout << "Nhap ten khach:";
    fflush(stdin);
    gets(tenKhach);
    cout << "Tong so loai hang hoa khach hang mua: ";
    fflush(stdin);
    do {
      cout << "Tong so hang > 0: ";
      cin >> n;
    } while (n < 0);
    a = new Hanghoa[n];
    cout << "Nhap thong tin hang hoa khach mua: " << endl;
    for (int i = 0; i < n; i++) {
      cout << "Ma Hang: ";
      cin >> a[i].maHang;
      cout << "Ten hang: ";
      cin >> a[i].tenHang;
      cout << "tien tra: ";
      cin >> a[i].tienTra;
    }
  }
  void Output() {
    cout << "\t\t\tPhieu mua hang: " << endl;
    cout << "Ma phieu: " << maPhieu << endl;
    cout << "Khach hang: " << tenKhach << endl;
    cout << "\t\t Hang hoa: " << endl;
    long long Tong = 0;
    for (int i = 0; i < n; i++) {
      cout << i + 1 << setw(5) << a[i].tenHang << setw(10) << a[i].maHang
           << setw(10) << a[i].tienTra << endl;
      Tong += a[i].tienTra;
    }
    cout << "\t\t\t Tong so tien: " << Tong << endl;
    delete[] a;
  }
  friend void setname(PhieuMuaHang& x) { strcpy(x.tenKhach, "Le Hoang Anh"); }
};
int main() {
  PhieuMuaHang x;
  x.Input();
  x.Output();
  setname(x);
  x.Output();
  return 0;
}