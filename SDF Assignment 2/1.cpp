#include <iostream>
using namespace std;
int day, month, year;
class ElectricBill {
public:
  string name, address;
  int billingMonth, billingAccount, amount;
  struct dueDate{
    int d;
    int m;
    int y;
  }e;
  ElectricBill(int month, int year) {
    cout << "Name: "; cin >> name;
    cout << "Address: "; cin >> address;
    cout << "Billing Account: "; cin >> billingAccount;
    billingMonth = month;
    e.d = 3;
    e.m = billingMonth + 1;
    e.y = year;
  }
  int monthlyBill() {
    amount = 5600;
    return amount;
  }
  int panelty() {
    int d, paneltyAmount;
    d = day - 3;
    if(d > 0) {
      paneltyAmount = 20 * d;
      return paneltyAmount;
    }
    else {
      d = 0;
      return d;
    }
  }
  void display() {
    cout << endl << endl << ":::ELECTRIC BILL:::" << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Monthly Amount: " << monthlyBill() << endl;
    cout << "Panelty: " << panelty() << endl;
    cout << "Total amount: " << monthlyBill() + panelty() << endl;
  }
};
int main() {
  cout << "Enter current day, month and year seperated by a space: "; cin >> day >> month >> year;
  ElectricBill c1(month, year);
  c1.display();
  return 0;
}
