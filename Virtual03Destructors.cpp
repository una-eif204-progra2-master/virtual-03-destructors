/*
 * =====================================================================================
 *
 *       Filename:  Virtual03Destructors.cpp
 *
 *    Description:  Basic example of Virtual Destructors
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mike@guzmanalan.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

struct Base {
  ~Base() {
    std::cout << "~Base()\n";
  }
};

struct Derived : Base {
  ~Derived() {
    std::cout << "~Derived()\n";
  }
};


// function main begins program execution
int main(int argc, const char *argv[]) {
  std::cout << "Welcome to the UNA! (VIRTUAL)" << std::endl;

  Base *base = new Derived();
  
  delete base; // what is printed here?
}  // end function main