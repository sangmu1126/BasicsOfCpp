#include <iostream>
#include <cassert>
using namespace std;

class Account {
    private:
        long accNumber;
        double balance;
        static int base;
    public:
        Account(double bal);
        ~Account();
        void checkBalance() const;
        void deposit(double amount);
        void withdraw(double amount);
};

int Account::base = 0;
Account::Account(double bal)
: balance(bal) {
    if (bal < 0.0) {
        assert(false);
    }
    base++;
    accNumber = 100000 + base;

    cout << "계좌_# " << accNumber << endl;
    cout << "잔액 " << balance << endl << endl;
} 

Account::~Account() {
    cout << "Your account is closed" << endl;
}

void Account::checkBalance() const {
    cout << "계좌_#" << accNumber << endl;
    cout << "잔액 " << balance << endl << endl;
}

void Account::deposit(double amount) {
    if (amount > 0.0) {
        balance += amount;
        cout << "계좌_#" << accNumber << endl;
        cout << "deposit " << amount << endl;
        cout << "잔액 " << balance << endl << endl;
    }
    else {
        cout << "Failed" << endl;
    }
}

void Account::withdraw(double amount) {
    if (amount > balance) {
        amount = balance;
    }
    balance -= amount;
    cout << "계좌_#" << accNumber << endl;
    cout << "인출 " << amount << endl;
    cout << "잔액 " << balance << endl << endl;
}

int main()
{
    Account acc1(2000);
    Account acc2(5000);
    Account acc3(1000);

    acc1.deposit(150);
    acc2.checkBalance();
    acc1.checkBalance();
    acc3.withdraw(800);
    acc1.withdraw(1000);
    acc2.deposit(120);

    return 0;
}