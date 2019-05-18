#include <iostream>
using namespace std;
class Strings {
public:
  string s1, s2;

  void operator==(Strings &s) {
    if(s1 == s2) {
      cout << "\nBoth strings are equal.\n";
    }
    else {
      cout << "\nBoth strings are not equal.\n";
    }
  }
};
int main() {
  Strings s;
  cout << "Enter string 1: "; cin >> s.s1;
  cout << "Enter string 2: "; cin >> s.s2;
  s.operator==(s);
  return 0;
}
