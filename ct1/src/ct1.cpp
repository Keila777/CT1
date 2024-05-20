//============================================================================
// Name        : ct1.cpp
// Author      : KS
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>


int main() {
std::string firstName, lastName, streetAddress, city, zipCode;


std::cout << "Enter your first name: ";
std::getline(std::cin, firstName);

std::cout << "Enter your last name: ";
std::getline(std::cin, lastName);

std::cout << "Enter your street address: ";
std::getline(std::cin, streetAddress);

std::cout << "Enter your city: ";
std::getline(std::cin, city);

std::cout << "Enter your zip code: ";
std::getline(std::cin, zipCode);

std::cout << "\nFirst Name: " << firstName <<
             "\nLast Name: " << lastName <<
             "\nStreet Address: " << streetAddress <<
             "\nCity: " << city <<
             "\nZip Code: " << zipCode <<
     "\n\nThank you for your input!";

return 0;

}
