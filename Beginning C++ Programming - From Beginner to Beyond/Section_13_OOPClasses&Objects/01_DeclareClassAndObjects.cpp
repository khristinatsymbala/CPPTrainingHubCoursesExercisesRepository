/*
---------Section 13 -  Declare Classes and Objects ----------------
- Classes:
    - blueprint from which objects are created
    - a user-defined data-type
    - has attributers(data)
    - has methods(func)
    - can hide data and methods
    - provides a public interface

- Objects:
    - created from class
    - represents a spesific instance of a class
    - can create many, many obj
    - each has its own identify
    - each can use the defined class method
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};
    
    // methods
    void talk(string);
    bool is_dead();
};

class Account {
    // attributes
    string name {"Account"};
    double balance {0.0};
    
    // methods
    bool deposit(double);
    bool withdraw(double);
    
};


int main() {
    Account frank_account;
    Account jim_account;
    
    
    Player frank;
    Player hero;
    
    Player players[] {frank, hero};
    
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);
    
    
    Player *enemy {nullptr};
    enemy = new Player;
    
    delete enemy;

    return 0;
}