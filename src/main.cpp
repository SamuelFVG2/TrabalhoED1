#include <iostream>

#include "classes/date/date.h"
#include "classes/person/person.h"

Person getPersonFromLine(std::string line)
{
    std::string name = "", numbers = "";

    for (char c : line) {
        if (isdigit(c)) {
            numbers += c;
        }
        else {
            name += c;
        }
    }

    Person person(name);

    for (int i = 0; i < numbers.size(); i += 6) {
        std::string dateString = numbers.substr(i, 6);

        int day = std::stoi(dateString.substr(0, 2)), month = std::stoi(dateString.substr(2, 2)), year = std::stoi(dateString.substr(4, 2));

        person.addDate(
            Date(day, month, year)
        );
    }

    return person;
}

int main()
{
    Person person =
        getPersonFromLine("JOAQUIM310799060605150280");

    std::cout << person.getPersonString();

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

