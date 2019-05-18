#include <iostream>
using namespace std;

class Vector {
  int coff_i, coff_j, coff_k;
public:
  Vector() {
    int i, j, k;
    cout << "Enter x coord: "; cin >> i;
    cout << "Enter y coord: "; cin >> j;
    cout << "Enter z coord: "; cin >> k;
    coff_i = i;
    coff_j = j;
    coff_k = k;
  }
  friend void operator*(Vector &v, int x);
};
void operator*(Vector &v, int x) {
  v.coff_i *= x;
  v.coff_j *= x;
  v.coff_k *= x;
  cout << "\nThe resultant vector is: (" << v.coff_i << ")i + (" << v.coff_j << ")j + (" << v.coff_k << ")k.\n";
}
int main() {
  Vector o1;
  int x;
  cout << "Enter the scalar integer: "; cin >> x;
  operator*(o1,x);
  return 0;
}
