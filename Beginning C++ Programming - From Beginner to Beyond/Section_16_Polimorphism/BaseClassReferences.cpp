/*
---------Section 16 - Using Base Class Reference ----------------
- We can also use Base class references with dynamic polymorphism
- Useful when we pass objects to functions that expect a Base class reference
*/


#include <iostream>

// This class uses dynamic polymorphism for the withdraw method
class Account
{
public:
	virtual void withdraw(double amount) {
		std::cout << "In Account::withdraw "<< amount << std::endl;
	}

	virtual ~Account() {}
};

class Cheking : public Account {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Cheking::withdraw " << amount << std::endl;
	}
	virtual ~Cheking(){}
};

class Savings : public Account {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Savings::withdraw " << amount << std::endl;
	}
	virtual ~Savings() {  }
};

class Trust : public Account {
public:
	virtual void withdraw(double amount) {
		std::cout << "In Trust::withdraw " << amount << std::endl;
	}
	virtual ~Trust() {  }
};

void do_withdraw(Account& account, double amount) {
	account.withdraw(amount);
}

int main() {

	Account a;
	Account& ref = a;
	ref.withdraw(1000);  // In Account::withdraw

	Trust t;
	Account& ref1 = t;
	ref1.withdraw(2000); // In Trust::withdraw

	Account a1;
	Savings a2;
	Checking a3;
	Trust a4;

	do_withdraw(a1, 1000);       // In Account::withdraw
	do_withdraw(a2, 2000);       // In Savings::withdraw
	do_withdraw(a3, 3000);       // In Checking::withdraw
	do_withdraw(a4, 4000);      // In Trust::withdraw

	return 0;
}
