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

// C++ program to demonstrate the working of friend function

#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;
        
        // friend function
        friend int addFive(Distance distance) {
          //accessing private members from the friend function
          distance.meter += 5;
          return distance.meter;
        }

    public:
        Distance() : meter(0) {}
        
};

int main() {
    cout << "Welcome to the UNA!" << std::endl;  // display message
    Distance distance;
    cout << "Distance: " << addFive(distance) << std::endl;
    return 0;
}