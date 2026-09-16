#include <bits/stdc++.h>
using namespace std;
class Goods {
 private:
  int quantity;
  string itemName, itemCode;
  long itemPrice;
  friend class Shoppingvoucher;
};
class Date {
 private:
  int day, month, year;
  friend class Shoppingvoucher;
};
class Shoppingvoucher {
 private:
  string voucherCode, employeeID, employeeName, customerName;
  int n;
  Date a;
  Goods* b;

 public:
  void Input() {
    cout << "\t\t\tNhap thong tin cho phieu mua hang:" << endl;
    cout << left << "Ma Phieu: ";
    getline(cin, voucherCode);
    cout << right << "Ngay lap phieu: ";
    cin >> a.day >> a.month >> a.year;
    cin.ignore();
    cout << left << "Ma nhan vien: ";
    getline(cin, employeeID);
    cout << "Ten nhan vien: ";
    getline(cin, employeeName);
    cout << "Ten khach hang: ";
    getline(cin, customerName);
    do {
      cout << "So luong loai hang khac mua: ";
      cin >> n;
      cin.ignore();
    } while (n < 0);
    b = new Goods[n];
    for (int i = 0; i < n; i++) {
      cout << "Ma hang: ";
      getline(cin, b[i].itemCode);
      cout << "Ten Hang: ";
      getline(cin, b[i].itemName);
      cout << "Don gia: ";
      cin >> b[i].itemPrice;
      cout << "So luong: ";
      cin >> b[i].quantity;
      cin.ignore();
    }
  }
  void Output() {
    cout << left << "Bach hoa Son Tung" << endl;

    cout << "\t\t\t\tPHIEU MUA HANG" << endl;

    cout << left << "Ma phieu: " << setw(10) << voucherCode << right
         << "Ngay lap phieu: " << a.day << "/" << a.month << "/" << a.year
         << endl;

    cout << left << "Ma nguoi lap phieu: " << employeeID << right
         << "Ho va ten nguoi lap phieu: " << employeeName << endl;

    cout << left << "Ten khach hang: " << customerName << endl;

    cout << "Danh muc hang hoa" << endl;

    cout << "Ma Hang" << setw(10) << "Ten Hang" << setw(30) << "Don gia"
         << setw(20) << "So luong" << setw(20) << "Thanh tien" << endl;

    long Tong = 0;
    int Tongquantity = 0;

    for (int i = 0; i < n; i++) {
      cout << b[i].itemCode << setw(10) << b[i].itemName << setw(30)
           << b[i].itemPrice << setw(20) << b[i].quantity << setw(30)
           << b[i].itemPrice * b[i].quantity << endl;

      Tong += b[i].itemPrice * b[i].quantity;
      Tongquantity += b[i].quantity;
    }

    cout << left << "TONG" << right << Tongquantity << setw(10) << Tong << endl;

    cout << setw(10) << "Giam doc" << setw(40) << "Phong tai chinh" << setw(40)
         << "Nguoi lap phieu" << endl;
  }
};

int main() {
  Shoppingvoucher x;
  x.Input();
  x.Output();
  return 0;
}