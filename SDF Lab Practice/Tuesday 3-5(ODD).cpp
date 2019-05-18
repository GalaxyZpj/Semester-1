#include <iostream>
using namespace std;

class Time {
  int h, m, s;
public:
  Time() {
    h = m = s = 0;
  }
  Time(int hour, int min, int sec) {
    h = hour; m = min; s = sec;
  }
  Time(Time &o) {
    h = o.h;
    m = o.m;
    s = o.s;
  }
  void printTime() {
    int h12;
    if(h > 12) {
      h12 = h - 12;
      cout << "Time(12H FORMAT): " << h12 << ":" << m << ":" << s << "PM\n";
    }
    else {
      cout << "Time(12H FORMAT): " << h << ":" << m << ":" << s << " AM\n";
      cout << "Time(24H FORMAT): " << h << ":" << m << ":" << s << " HOUR\n";
    }
  }
  friend void operator+(Time &o1, Time &o2);
  friend void operator<(Time &o1, Time &o2);
};
void operator+(Time &o1, Time &o2) {
  int h, m, s;
  h = o1.h + o2.h;
  m = o1.m + o2.m;
  s = o1.s + o2.s;

  if(s >= 60) {
    s -= 60; m += 1;
    if(m >= 60) {
      m -= 60; h += 1;
      if(h >= 24) {
        h -= 24;
        cout << "Next day time(24H FORMAT): " << h << ":" << m << ":" << s << " HOUR\n";
        }
        else {
          cout << "1Time(24H FORMAT): " << h << ":" << m << ":" << s << " HOUR\n";
        }
      }
      else {
        cout << "2Time(24H FORMAT): " << h << ":" << m << ":" << s << " HOUR\n";
      }
    }
    else {
      cout << "3Time(24H FORMAT): " << h << ":" << m << ":" << s << " HOUR\n";
    }
  }

int main() {
  Time t1(23, 54, 33), t2(15, 22, 15);
  t1 + t2;

  return 0;
}
