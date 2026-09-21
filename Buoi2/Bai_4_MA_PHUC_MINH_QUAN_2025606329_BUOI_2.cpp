#include <bits/stdc++.h>
using namespace std;
class Goods {
 private:
  int quantity;
  string itemName, itemCode;
  long itemPrice;
  friend class Shoppingvoucher;
  friend class Dataprocessing;
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
  friend class Dataprocessing;

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

    cout << left << "TONG    " << right << Tongquantity << setw(10) << Tong
         << endl;

    cout << setw(10) << "Giam doc" << setw(40) << "Phong tai chinh" << setw(40)
         << "Nguoi lap phieu" << endl;
  }
  friend void setcustomerName(Shoppingvoucher& x);
};
void setcustomerName(Shoppingvoucher& x) { x.customerName = "Le Van Hoang "; }

class Dataprocessing {
  friend class Shoppingvoucher;

 public:
  int Than15(Shoppingvoucher& x) {
    int dem = 0;
    for (int i = 0; i < x.n; i++) {
      if (x.b[i].quantity > 15) {
        dem++;
      }
    }
    return dem;
  }
  void Arrange(Shoppingvoucher& x) {
    for (int i = 0; i < x.n; i++) {
      for (int j = i + 1; j < x.n; j++) {
        if (x.b[i].quantity < x.b[j].quantity) {
          swap(x.b[i], x.b[j]);
        }
      }
    }
  }
  void Lagest(Shoppingvoucher& x) {
    int vt = 0;
    for (int i = 1; i < x.n; i++) {
      if (x.b[i].quantity > x.b[vt].quantity) {
        vt = i;
      }
    }
    cout << "Mat hang co so luong lon nhat: " << endl;
    cout << "Ma Hang: " << x.b[vt].itemCode << endl;
  }
  void SetquanlityitemBimBim(Shoppingvoucher& x) {
    for (int i = 0; i < x.n; i++) {
      if (x.b[i].itemName == "Bim Bim") {
        x.b[i].quantity = 120;
      }
    }
  }
};

int main() {
  Shoppingvoucher x;
  Dataprocessing z;
  x.Input();
  x.Output();
  cout << "So luong mat hang co so luong lon hon 15 la: " << z.Than15(x)
       << endl;
  z.Lagest(x);
  z.Arrange(x);
  cout << "\t\t\t Sau khi sap xep" << endl;
  x.Output();
  setcustomerName(x);
  cout << "Da doi ten khach hang: " << endl;
  x.Output();
  z.SetquanlityitemBimBim(x);
  cout << endl;
}