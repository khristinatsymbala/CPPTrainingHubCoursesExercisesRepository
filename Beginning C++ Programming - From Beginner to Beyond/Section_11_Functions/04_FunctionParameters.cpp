/*
---------Section 11 -  Function Parmameters ----------------
    - When we call a func we can pass in data to that func
    - In the function call they are called arguments
    - In the function defenition they are called parameters
    - They must match in number, order and in type

Pass-by-value
    - When u pass data into a func it is passed-by-value
    - A copy of the data is passed to the function
    - Whatever changes u make to the parameter in the func does NOT affect the arg that was passed in

Formal vs Actual parameters
    - Formal parameters - the parameters defined in function header
    - Actual parameters - the parameters used in the func call, the arguments

Function Return Statement:
    - If a func returns a value then it must use a return statement that return a value
    - If a func does not returns a value(void) then the return statement is optional
    - return statement can occur anywhere in the body of the function
    - return statement immidiately exist the func
    - We can have multiple return statement in a func:
        - avoid many return statement in a func
    - The return value is a result of a function call
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();  // delete all vector elements
}

void print_vector(vector<string> v) {
    for (auto s: v) 
        cout << s << " ";
    cout << endl;
}

int main() {
    int num {10};
    int another_num {20};
    
    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;
    
    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1: " << another_num << endl;

    string name {"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);
    
    cout << endl;
    return 0;
}

