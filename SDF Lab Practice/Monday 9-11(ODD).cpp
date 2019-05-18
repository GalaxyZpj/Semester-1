#include <iostream>
using namespace std;
int n;
class SETINT {
public:
  int arr[100];
  SETINT() {
    for(int i=0; i<n; i++) {
      arr[i] = 0;
    }
  }
  void insertint(int x) {
    for(int i=0; i<n; i++) {
      if(arr[i] > x) {
        int temp = arr[n-1];
        for(int j = n-1; j > i; j--) {
          arr[j] = arr[j-1];
        }
        arr[i] = temp;
        break;
      }
    }
  }
  SETINT operator+(const SETINT &S) {
    SETINT o;
    int i, j;
    for(j = 0; j < n; j++) {
      o.arr[j] = arr[j];
    }
    i = n;
    for(j = 0; j < n; j++, i++) {
      o.arr[i] = S.arr[j];
    }
    return o;
  }
};
int main() {
  cout << "Enter no. of elements in the sets: "; cin >> n;
  SETINT o1;
  cout << "\nEnter elements of 1st set:-\n";
  for(int i=0; i < n; i++) {
    cout << "Enter element " << i+1 << ": "; cin >> o1.arr[i];
    o1.insertint(o1.arr[i]);
  }
  cout << "First set: ";
  for(int i=0; i<n; i++) {
    cout << o1.arr[i] << " ";
  } cout << endl;
  SETINT o2;
  cout << "\nEnter elements of 2nd set:-\n";
  for(int i=0; i < n; i++) {
    cout << "Enter element " << i+1 << ": "; cin >> o2.arr[i];
    o2.insertint(o2.arr[i]);
  }
  cout << "Second set: ";
  for(int i=0; i<n; i++) {
    cout << o2.arr[i] << " ";
  } cout << endl;
  SETINT o = (o1 + o2);

  cout << "Resultant Set: ";
  for(int i=0; i <= 2*n-1; i++) {
    cout << o.arr[i] << " ";
  }

}
