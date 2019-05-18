#include <iostream>
using namespace std;
class DB;
class DM {
  double m, cm;
public:
  friend void sum(DM, DB);
  DM(int d_m = 0, int d_cm = 0) {
    m = d_m;
    cm = d_cm;
  }
  void final_DM() {
    cout << "Distance in m and cm: " << m << "m  " << cm << "cm\n";
  }
}DMresult;
class DB {
  double f, in;
public:
  friend void sum(DM, DB);
  DB(int d_f = 0, int d_in = 0) {
    f = d_f;
    in = d_in;
  }
  void final_DB() {
    cout << "Distance in f and in: " << f << "f  " << in << "in\n";
  }
}DBresult;
void sum(DM dm1, DB db1) {
  double inch, centimeter; int feet, meter;
  inch = (db1.f * 12) + (dm1.cm * 0.394) + (dm1.m * 39.37);
  centimeter = (dm1.m * 100) + (db1.f * 30.48) + (db1.in * 2.54);
  feet = inch/12; inch = inch - (feet*12);
  meter = centimeter/100; centimeter = centimeter - (meter*100);
  DMresult.m = meter; DMresult.cm = centimeter;
  DBresult.f = feet; DBresult.in = inch;
}
int main() {
  DB db(5, 4);
  DM dm(2, 30);
  sum(dm, db);
  cout << "\n:::Final Conversions:::\n\n";
  DMresult.final_DM();
  DBresult.final_DB();
  return 0;
}
