#include <iostream>

#include "classes/date/date.h"
#include "classes/person/person.h"
#include <fstream>

Person getPersonFromLine(std::string line) {
    std::string name = "", numbers = "";

    for (char c : line) {
        if (isdigit(c)) {
            numbers += c;
        } else {  
            name += c;
        }
    }

    Person person(name);

    for (int i = 0; i < (int)numbers.size(); i += 6) {
        std::string dateString = numbers.substr(i, 6);

        int day   = std::stoi(dateString.substr(0, 2));
        int month = std::stoi(dateString.substr(2, 2));
        int year  = std::stoi(dateString.substr(4, 2));

        person.addDate(Date(day, month, year));
    }

    return person;
}


int main() {
    std::vector<Person> persons;
    std::ifstream file("./arquivo.txt");
    std::string line;

    while (std::getline(file, line)) {
        Person person = getPersonFromLine(line);
        persons.push_back(person);
    }
    std::cout << persons.size() << std::endl;
    for (int i = 0; i<persons.size();i++){
        std::cout << persons[i].getPersonString() << std::endl;
    } 

    file.close();

    return 0;
}