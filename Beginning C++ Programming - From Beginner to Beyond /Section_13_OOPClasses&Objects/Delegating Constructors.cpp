#include <iostream>
#include <string>

/*
Constructors are allowed to delegate (transfer responsibility for) initialization to another constructor from the same class type.
This process is sometimes called constructor chaining and such constructors are called delegating constructors.
*/

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

// To make one constructor delegate initialization to another constructor, simply call the constructor in the member initializer list.

Player::Player()
    : Player{"None", 0, 0}
{
    cout << "No-args constructor" << endl;
}

Player::Player(std::string name_val)
    : Player{name_val, 0, 0}
{
    cout << "One-arg constructor" << endl;
}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three-args constructor" << endl;
}

int main()
{

    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain", 100, 55};

    return 0;
}
