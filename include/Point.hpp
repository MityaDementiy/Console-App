#include <iostream>
#include <string>

struct Ticket {
private:
  std::string passenger_name;
  std::string passenger_surname;
  int passenger_age;

public:
  void display_passenger() const {
    std::cout << "Passenger name: " << passenger_name << "\n";
    std::cout << "Passenger surname: " << passenger_surname << "\n";
    std::cout << "Passenger age: " << passenger_age << "\n";
  }

  void set_name(const std::string& name){
    passenger_name = name;
  }
  void set_surname(const std::string& surname){
    passenger_surname = surname;
  }
  void set_age(int age){
    passenger_age = age;
  }
};
