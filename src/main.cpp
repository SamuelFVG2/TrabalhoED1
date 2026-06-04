#include <iostream>

#include "classes/date/date.h"
#include "classes/person/person.h"

int main() {
    Date date(31, 12, 2024);
    Person person("Samuel");
    person.addDate(Date(10, 5, 2000));
    person.addDate(Date(25, 12, 2024));
    person.addDate(Date(1, 1, 1999));

    std::cout << "Date 1: " << date.getDateString() << std::endl;
    std::cout << "Person 1: " << person.getPersonString() << std::endl;
    
    return 0;
}

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <vector>
// #include <string>


// std::vector<std::string> getPersonFromLine(std::string line ) {
//   std::string cell, aux;
//   std::vector<std::string> data(4);
//   std::stringstream ss(line);

// }

// int main()
// {
//   std::ifstream file("./dados.txt");
//   std::string line;
//   std::getline(file, line);

//   while (std::getline(file, line)) { 
//     std::vector<std::string> person = getPersonFromLine(line);
//   }

//   return 0;
// }

