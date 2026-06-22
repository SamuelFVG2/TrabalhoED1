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
        result += date.getDateString() + " ";
    }

    return result;
}


void Person::sortDates() {
    int n = dates.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            bool shouldSwap = false;

            if (dates[j].getYear() < dates[j + 1].getYear()) {
                shouldSwap = true;
            }
            else if (
                dates[j].getYear() == dates[j + 1].getYear() &&
                dates[j].getMonth() < dates[j + 1].getMonth()
            ) {
                shouldSwap = true;
            }
            else if (
                dates[j].getYear() == dates[j + 1].getYear() &&
                dates[j].getMonth() == dates[j + 1].getMonth() &&
                dates[j].getDay() < dates[j + 1].getDay()
            ) {
                shouldSwap = true;
            }

            if (shouldSwap) {
                Date temp = dates[j];
                dates[j] = dates[j + 1];
                dates[j + 1] = temp;
            }
        }
    }
}