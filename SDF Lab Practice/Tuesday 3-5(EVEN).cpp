#include <iostream>
using namespace std;

class Poly {
  double a, b, c;
public:
  Poly() {
    a = b = c = 0;
  }
  Poly(double aa, double bb, double cc) {
    a = aa;
    b = bb;
    c = cc;
  }
  Poly(Poly &o) {
    a = o.a;
    b = o.b;
    c = o.c;
  }
  Poly operator+(Poly &o) {
    Poly sum;
    sum.a = a + o.a;
    sum.b = b + o.b;
    sum.c = c + o.c;
    return sum;
  }
  Poly operator-(Poly &o) {
    Poly diff;
    diff.a = a - o.a;
    diff.b = b - o.b;
    diff.c = c - o.c;
    return diff;
  }
  void display() {
    if(a == 0 || b == 0) {
      if(a == 0) {
        cout << "Polynomial Equation: (" << b << ")x + (" << c << ")" << endl;
      }else if(b == 0) {
        cout << "Polynomial Equation: (" << a << ")x^2 + (" << c << ")" <<  endl;
      }
      else if(a == 0 && b == 0) {
        cout << "Polynomial Equation: (" << c << ")" <<  endl;
      }
    }
    else {
      cout << "Polynomial Equation: (" << a << ")x^2 + (" << b << ")x + (" << c << ")" << endl;
    }
  }
};

int main() {
  Poly o1(1, 2, 2), o2(4, 3, 1), os, od;
  os = o1 + o2;
  od = o1 - o2;
  cout << "Sum resultant:-\n";
  os.display();
  cout << "Difference resultant:-\n";
  od.display();
  return 0;
}
