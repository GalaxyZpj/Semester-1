#include <iostream>
using namespace std;

class Grocery {
protected:
  string item, brand; int price, units;
public:
  Grocery() {
    cout << "Enter item name: "; cin >> item;
    cout << "Enter item price: "; cin >> price;
    cout << "Enter item brand: "; cin >> brand;
    cout << "Enter item available units: "; cin >> units;
  }
  Grocery(Grocery &o) {
    item = o.item;
    brand = o.brand;
    price = o.price;
    units = o.units;
  }
  friend void display(Grocery &o);
  int unit() {
    return units;
  }
};
class onlineOrder:public Grocery {
public:
  void order(int n) {
    if(n>=2) {
      cout << "\n:::Order placed:::\n";
    }
    else {
      cout << "\nItem out of stock!\n";
    }
  }
};
void display(Grocery &o) {
  cout << "\nItem: " << o.item << endl;
  cout << "Brand: " << o.brand << endl;
  cout << "Price: " << o.price << endl;
  cout << "Available units: " << o.units << endl;
}

int main() {
  onlineOrder o;
  Grocery g1(o);
  display(g1);
  o.order(o.unit());
  return 0;
}
