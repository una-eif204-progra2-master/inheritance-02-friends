/*
 * =====================================================================================
 *
 *       Filename:  Inheritance02Friend.cpp
 *
 *    Description:  Inheritance Friends
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

struct Base {
    friend int main();
public:
    int numA = 0;
protected:
    int numB = 1;
protected:
    int numC = 2;
};

struct Derived: public Base {
    friend int main();
    Derived() {
        numA = 3;
    }

public:
    int numD = 3;
protected:
    int numE = 4;
private:
    int numF = 5;
};

// function main begins program execution
int main() {
    std::cout << "Welcome to the UNA!" << std::endl;  // display message

    Derived derived;
    derived.numA = 2;
    derived.numB = 2;
    derived.numC = 2;
    derived.numD = 2;
    derived.numE = 2;
    derived.numF = 2;

    return 0;  // indicate that program ended successfully
}  // end function main

