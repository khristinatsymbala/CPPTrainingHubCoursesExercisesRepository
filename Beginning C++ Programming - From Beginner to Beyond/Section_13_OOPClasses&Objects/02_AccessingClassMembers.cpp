/*
---------Section 13 - Accessing Class Members ----------------
- We can access:
    - class atributes
    - class method
- Some class members will not be accessible(private, protected)
- We need an object to access instance variable

If we have an object(dot operator)
frank_account.name = "Frank's account";

If we have a ointer to an object(member of pointer operator)
    - dereference the pointer then use the dot operator
    (*enemy).name = "Enemy";

    - or use the member of pointer operator(arrow operator)
    Account *frank_account = new Account();

    frank_account -> balance;
*/
#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // attributes
    string name;
    int health;
    int xp;
    
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;  }
    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;
    
    // methods
    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl; }
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl;  }
    
};

int main() {
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");
    


    return 0;
}

