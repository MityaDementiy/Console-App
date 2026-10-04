#include <iostream>
#include <string>
#include "Point.hpp"

int main(){
    Ticket ticket_1;

    std::string name;
    std::cout << "Enter passenger name:\n";
    std::getline(std::cin, name);
    ticket_1.set_name(name);

    std::string surname;
    std::cout << "Enter passenger surname:\n";
    std::getline(std::cin, surname);
    ticket_1.set_surname(surname);

    int age;
    std::cout << "Enter passenger age:\n";
    std::cin >> age;
    ticket_1.set_age(age);
    std::cout << "Please, check passenger information!\n";
    ticket_1.display_passenger();

    return 0;
}