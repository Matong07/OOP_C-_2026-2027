#include <bits/stdc++.h>

using namespace std;

class TacGia {
  char TenTacGia[50];
  char DiaChi_TG[50];
  friend class SACHGK;

 public:
  void Nhap() {
    cout << "Ten tac gia: ";
    cin.getline(TenTacGia, 50);
    cout << "Dia chi tac gia: ";
    cin.getline(DiaChi_TG, 50);
  }
  void Xuat() {
    cout << "Tac gia: " << TenTacGia << " | Dia chi TG: " << DiaChi_TG << endl;
  }
};

class NXB {
  char TenNXB[50];
  char DiaChi_NXB[50];
  friend class SACHGK;

 public:
  void Nhap() {
    cout << "Ten NXB: ";
    cin.getline(TenNXB, 50);
    cout << "Dia chi NXB: ";
    cin.getline(DiaChi_NXB, 50);
  }
  void Xuat() {
    cout << "NXB: " << TenNXB << " | Dia chi NXB: " << DiaChi_NXB << endl;
  }
};

class IDSACH {
 protected:
  char TenSach[50];
  int MaSach;

 public:
  void Nhap() {
    cout << "Ma sach: ";
    cin >> MaSach;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ten sach: ";
    cin.getline(TenSach, 50);
  }
  void Xuat() {
    cout << "Ma sach: " << MaSach << " | Ten sach: " << TenSach << endl;
  }
};

class SACHGK : public IDSACH {
  TacGia x;
  NXB y;

 public:
  void Nhap() {
    IDSACH::Nhap();
    x.Nhap();
    y.Nhap();
  }
  void Xuat() {
    IDSACH::Xuat();
    x.Xuat();
    y.Xuat();
    cout << "--------------------------------------\n";
  }
  char* getTenNXB() { return y.TenNXB; }
  char* getTenTacGia() { return x.TenTacGia; }
  int getMaSach() { return MaSach; }
};

void hienThiDanhSach(SACHGK ds[], int n) {
  for (int i = 0; i < n; i++) {
    ds[i].Xuat();
  }
}

void locSachChiDinh(SACHGK ds[], int n) {
  bool timThay = false;
  for (int i = 0; i < n; i++) {
    if (strcmp(ds[i].getTenNXB(), "KIMDONG") == 0 &&
        strcmp(ds[i].getTenTacGia(), "Pham Van At") == 0) {
      ds[i].Xuat();
      timThay = true;
    }
  }
  if (!timThay) cout << "Khong tim thay sach thoa man yeu cau.\n";
}

void sapXepGiamDanMaSach(SACHGK ds[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (ds[i].getMaSach() < ds[j].getMaSach()) {
        SACHGK temp = ds[i];
        ds[i] = ds[j];
        ds[j] = temp;
      }
    }
  }
}

int main() {
  SACHGK ds[50];
  int n;
  cout << "Nhap so luong sach giao khoa: ";
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int i = 0; i < n; i++) {
    cout << "\n--- Nhap thong tin sach thu " << i + 1 << " ---\n";
    ds[i].Nhap();
  }

  cout << "\n=== DANH SACH SACH GIAO KHOA ===\n";
  hienThiDanhSach(ds, n);

  cout << "\n=== SACH CUA NXB KIMDONG & TAC GIA PHAM VAN AT ===\n";
  locSachChiDinh(ds, n);

  sapXepGiamDanMaSach(ds, n);
  cout << "\n=== DANH SACH SAU KHI SAP XEP GIAM DAN THEO MA SACH ===\n";
  hienThiDanhSach(ds, n);

  return 0;
}