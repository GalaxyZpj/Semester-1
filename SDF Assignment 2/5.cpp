#include <iostream>
using namespace std;

class Account {
public:
  string name;
  int acc_no, balance;
  char type;
  Account() {
    acc_no = 0;
    balance = 0;
  }
  void deposit() {
    int amount;
    cout << "\nEnter amount to be deposited: "; cin >> amount;
    balance += amount;
    cout << "Account balance: " << balance << endl;
  }
  void withdraw() {
    int amount;
    cout << "\nEnter amount to be withdrawn: "; cin >> amount;
    balance -= amount;
    if(balance > 0) {
      cout << "Account balance: " << balance << endl;
    }
    else {
      cout << "Not sufficient balance in the account." << endl;
      balance += amount;
    }
  }
};
class Cur_acct: public Account {
public:
  Cur_acct() {
    type = 'c';
    acc_no = 0;
    balance = 0;
  }
  void panelty() {
    if(balance < 2000) {
      cout << "\nBalance below 2000, Therefore there will be a panelty fee of Rs 200 charged.\n";
      balance -= 200;
      cout << "Account balance: " << balance << endl;
    }
  }
};
class Sav_acct: public Account {
public:
  Sav_acct() {
    type = 's';
    acc_no = 0;
    balance = 0;
  }
  void interest() {
    int interest;
    interest = 5 * (balance/100);
    balance += interest;
    cout << "\nInterest added: " << interest << endl;
    cout << "Account balance: " << balance << endl;
  }
};
void cur() {
  Cur_acct c;
  c.deposit();
  c.withdraw();
  c.panelty();
}
void sav() {
  Sav_acct c;
  c.deposit();
  c.withdraw();
  c.interest();
}
int main() {
  int type;
  cout << "\033[2J\033[1;1H";
  cout << ":::MENU:::\n\n";
  cout << "Choose type of account:-\n";
  cout << "1. Current\n";
  cout << "2. Saving\n";
  cin >> type;
  switch(type) {
    case 1: cur(); break;
    case 2: sav(); break;
    default: cout << "Invalid Choice.\n";
  }
  return 0;
}
