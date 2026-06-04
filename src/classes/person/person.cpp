#include "person.h"


Person::Person(std::string name) {
    this->name = name;
}

std::string Person::getName() const {
    return this->name;
}

std::vector<Date> Person::getDates() const {
    return this->dates;
}

void Person::setName(std::string name) {
    this->name = name;
}

void Person::addDate(Date date) {
    this->dates.push_back(date);
}

std::string Person::getPersonString() {
    std::string result = this->name + "  ~  ";

    for (Date date : this->dates) {
        result += date.getDateString() + " - ";
    }

    return result;
}