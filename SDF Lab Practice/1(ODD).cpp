#include <iostream>
using namespace std;

class Measure {
  int distance, time;
public:
  Measure() {
    int dis, tim;
    cout << "Enter distance: "; cin >> dis;
    cout << "Enter time: "; cin >> tim;
    time = tim;
    distance = dis;
  }
  void operator-(Measure &o) {
    float s1, s2, st;
    s1 = distance/time;
    s2 = o.distance/o.time;
    st = s1 - s2;
    cout << "Relative Speed: " << st << endl << endl;
    if(st < 0) {
      cout << "Here - sign indicates that the objects are travelling in opposite direction with respect to each other.\n";
    }
  }
};
int main() {
  cout << "\n::Creating object 1::\n";
  Measure o1;
  cout << "\n::Creating object 2::\n";
  Measure o2;
  o1 - o2;
  return 0;
}
