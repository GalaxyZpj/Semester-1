#include <iostream>
using namespace std;

class BankAccount {
  int acc_no, balance, deposit, withdraw;
  char type;
public:
  BankAccount() {
    acc_no = balance = deposit = withdraw = 0;
  }
  int statement() {
    balance = balance + withdraw + deposit;
    return balance;
  }
  void operations() {
    int x;
    cout << "Enter amount to deposit: "; cin >> x;
    deposit += x;
    cout << "Enter amount to withdraw: "; cin >> x;
    withdraw -= x;
    cout << "Balance: " << statement() << endl;
  }
  friend void display(BankAccount &o);
};

class Loan : protected BankAccount {
public:
  void giveLoan(int balance) {
    int amount;
    if(balance > 100000) {
      cout << "Enter amount: "; cin >> amount;
      if(amount < balance) {
        balance -= amount;
        cout << "Remaning balance: " << balance << endl;
      }
      else {
        cout << "Balance less than entered amount, loan not allowed.\n";
      }
    }
    else {
      cout << "Balance less than 1 lakh, loan not allowed.\n";
    }
  }
};
void display(BankAccount &o) {
  cout << "Account no: " << o.acc_no << endl;
  cout << "Total amount deposited: " << o.deposit << endl;
  cout << "Total amount withdrawn: " << o.withdraw << endl;
  cout << "Balance: " << o.balance << endl;
}
int main() {
  BankAccount o;
  o.operations();
  Loan l;
  l.giveLoan(o.statement());
  return 0;
}
